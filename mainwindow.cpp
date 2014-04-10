#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "dialogajoutmedicament.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlTableModel>
#include <QVector>
#include "dialogconfirmajout.h"
#include "dialogmodifmedicament.h"
#include "dialogajoutpraticien.h"
#include "dialogmodifpraticien.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->chargecomboBoxFamille();
    this->chargecomboBoxType();
    this->chargecomboBoxVille();
    this->chargecomboBoxVille2();
    this->chargeListePraticien();
    this->chargeListeVisiteur();
}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_action_Quitter_triggered()
{
    this->close();
}

void MainWindow::chargecomboBoxFamille()
{
    ui->comboBoxFamilleMain->clear();
    this->vectorIdFamille.clear();

    ui->comboBoxFamilleMain->addItem("Tous les médicaments...");
    this->vectorIdFamille.push_back("&@;:");

    QString req1="select * from famille";
    QSqlQuery res(req1);
   while(res.next())
        {
        ui->comboBoxFamilleMain->addItem(res.value(1).toString());
        this->vectorIdFamille.push_back(res.value(0).toString());
        }
}

void MainWindow::chargecomboBoxType()
{
    ui->comboBoxType->clear();
    this->vectorIdType.clear();

    ui->comboBoxType->addItem("Tous les types de praticien...");
    this->vectorIdType.push_back("&]:;");

    QString req2="select TYP_LIBELLE from type_praticien order by TYP_LIBELLE";
    QSqlQuery res2(req2);
    while(res2.next())
    {
        ui->comboBoxType->addItem(res2.value(0).toString());
        this->vectorIdType.push_back(res2.value(1).toString());
    }
}

void MainWindow::chargecomboBoxVille()
{
    ui->comboBoxVille->clear();
    this->vectorIdVille.clear();

    ui->comboBoxVille->addItem("Toutes les villes...");
    this->vectorIdVille.push_back("]&;:");

    QString req2="select PRA_VILLE from praticien order by PRA_VILLE";
    QSqlQuery res2(req2);
    while (res2.next())
    {
        ui->comboBoxVille->addItem(res2.value(0).toString());
        this->vectorIdVille.push_back(res2.value(0).toString());
    }
}

void MainWindow::chargecomboBoxVille2()
{
    ui->comboBoxVille2->clear();
    this->vectorIdType.clear();

    ui->comboBoxVille2->addItem("Toutes les villes...");
    this->vectorIdType.push_back("&]:;");

    QString req2="select PRA_VILLE from praticien";
    QSqlQuery res2(req2);
    while(res2.next())
    {
        ui->comboBoxVille2->addItem(res2.value(0).toString());
        this->vectorIdType.push_back(res2.value(0).toString());
    }
}

void MainWindow::on_listWidgetMedicament_activated()
{

    QString req="select MED_NOMCOMMERCIAL from medicament natural join famille where FAM_LIBELLE='"+ui->comboBoxFamilleMain->itemText(0)+"'";
    QSqlQuery res(req);
}

void MainWindow::on_comboBoxFamilleMain_currentIndexChanged(const QString)
{
        this->chargeListeMedicament();
}

void MainWindow::on_comboBoxType_currentIndexChanged(const QString)
{
    this->chargeListePraticien();
}

void MainWindow::on_comboBoxVille_currentIndexChanged(const QString)
{
    this->chargeListePraticien();
}


void MainWindow::on_comboBoxVille2_currentIndexChanged(const QString)
{
    this->chargeListeVisiteur();
}


void MainWindow::on_pushButtonAjoutMedicament_clicked()
{
    DialogAjoutMedicament* AjoutMedicament=new DialogAjoutMedicament(this);
    AjoutMedicament->show();

    if(AjoutMedicament->exec()==QDialog::Accepted)
    {
        delete(AjoutMedicament);
    }
    else//pas moyen de se connecter
    {
        delete(AjoutMedicament);

    }
}

void MainWindow::chargeListeMedicament()
{
    ui->listWidgetMedicament->clear();
    this->vectorIdMedicament.clear();
    ui->listWidgetMedicament->setEnabled(true);

    if (ui->comboBoxFamilleMain->currentIndex()==0)
    {
        QString req="select MED_DEPOTLEGAL,MED_NOMCOMMERCIAL, FAM_LIBELLE from medicament natural join famille order by MED_NOMCOMMERCIAL";
        QSqlQuery res(req);
        while(res.next())
        {
            ui->listWidgetMedicament->addItem(res.value(1).toString()+" ("+res.value(2).toString()+")");
            this->vectorIdMedicament.push_back(res.value(0).toString());
        }
        if (ui->listWidgetMedicament->count()==0)
        {
            ui->listWidgetMedicament->addItem("Aucun médicament enregistré...");
            ui->listWidgetMedicament->setEnabled(false);
        }
    }
    else
    {
        QString req="select MED_DEPOTLEGAL,MED_NOMCOMMERCIAL from medicament natural join famille where FAM_CODE='"+this->vectorIdFamille.value(ui->comboBoxFamilleMain->currentIndex())+"'";
        QSqlQuery res(req);
        while(res.next())
        {
               ui->listWidgetMedicament->addItem(res.value(1).toString());
               this->vectorIdMedicament.push_back(res.value(0).toString());
        }
        if (ui->listWidgetMedicament->count()==0)
        {
            ui->listWidgetMedicament->addItem("Aucun médicament enregistré...");
            ui->listWidgetMedicament->setEnabled(false);
        }

    }
}

void MainWindow::chargeListePraticien()
{
    ui->listWidgetPraticien->clear();
    this->vectorIdPraticien.clear();
    ui->listWidgetPraticien->setEnabled(true);

    if(ui->comboBoxType->currentIndex()==0 && ui->comboBoxVille->currentIndex()==0)
    {
        QString req2="select PRA_CODE,PRA_NOM,PRA_PRENOM,TYP_CODE from praticien order by PRA_NOM";
        QSqlQuery res2(req2);
        while(res2.next())
        {
            ui->listWidgetPraticien->addItem(res2.value(1).toString()+" "+res2.value(2).toString()+" ("+res2.value(3).toString()+")");
            this->vectorIdPraticien.push_back(res2.value(0).toString());
        }
        if (ui->listWidgetPraticien->count()==0)
        {
            ui->listWidgetPraticien->addItem("Aucun praticien enregistré...");
            ui->listWidgetPraticien->setEnabled(false);
        }
    }
    else
    {
        if(ui->comboBoxType->currentIndex()!=0 && ui->comboBoxVille->currentIndex()!=0)
        {
            qDebug()<<"select PRA_CODE,PRA_NOM,PRA_PRENOM,type_praticien.TYP_CODE,TYP_LIBELLE from praticien natural join type_praticien where PRA_VILLE='"+ui->comboBoxVille->currentText()+"' and TYP_LIBELLE='"+ui->comboBoxType->currentText()+"' order by PRA_NOM";
            QString req3="select PRA_CODE,PRA_NOM,PRA_PRENOM,type_praticien.TYP_CODE,TYP_LIBELLE from praticien natural join type_praticien where PRA_VILLE='"+ui->comboBoxVille->currentText()+"' and TYP_LIBELLE='"+ui->comboBoxType->currentText()+"' order by PRA_NOM";
            QSqlQuery res3(req3);
            while(res3.next())
            {
                ui->listWidgetPraticien->addItem(res3.value(1).toString()+" "+res3.value(2).toString()+" ("+res3.value(4).toString()+")");
                this->vectorIdPraticien.push_back(res3.value(0).toString());
            }
            if(ui->listWidgetPraticien->count()==0)
            {
                ui->listWidgetPraticien->addItem("Aucun praticien enregistré...");
                ui->listWidgetPraticien->setEnabled(false);
            }
        }

        else
        {
        if(ui->comboBoxType->currentIndex()==0)
        {
            qDebug()<<"select PRA_CODE,PRA_NOM,PRA_PRENOM from praticien where PRA_VILLE='"+ui->comboBoxVille->currentText()+"' order by PRA_NOM";
            QString req2="select PRA_CODE,PRA_NOM,PRA_PRENOM from praticien where PRA_VILLE='"+ui->comboBoxVille->currentText()+"' order by PRA_NOM";
            QSqlQuery res2(req2);
            while(res2.next())
            {
                ui->listWidgetPraticien->addItem(res2.value(1).toString()+" "+res2.value(2).toString()+" ("+res2.value(4).toString()+")");
                this->vectorIdPraticien.push_back(res2.value(0).toString());
            }
            if(ui->listWidgetPraticien->count()==0)
            {
                ui->listWidgetPraticien->addItem("Aucun praticien enregistré...");
                ui->listWidgetPraticien->setEnabled(false);
            }
        }
        else
        {
        qDebug()<<"select PRA_CODE,PRA_NOM,PRA_PRENOM,type_praticien.TYP_CODE,TYP_LIBELLE from praticien natural join type_praticien where TYP_LIBELLE='"+ui->comboBoxType->currentText()+"' order by PRA_NOM";
        QString req2="select PRA_CODE,PRA_NOM,PRA_PRENOM,type_praticien.TYP_CODE,TYP_LIBELLE from praticien natural join type_praticien where TYP_LIBELLE='"+ui->comboBoxType->currentText()+"' order by PRA_NOM";
        QSqlQuery res2(req2);
        while(res2.next())
        {
            ui->listWidgetPraticien->addItem(res2.value(1).toString()+" "+res2.value(2).toString()+" ("+res2.value(4).toString()+")");
            this->vectorIdPraticien.push_back(res2.value(0).toString());
        }
        if(ui->listWidgetPraticien->count()==0)
        {
            ui->listWidgetPraticien->addItem("Aucun praticien enregistré...");
            ui->listWidgetPraticien->setEnabled(false);
        }
        }
        }
    }
}

void MainWindow::chargeListeVisiteur()
{
    ui->listWidgetVisiteur->clear();
    this->vectorIdVisiteur.clear();
    ui->listWidgetVisiteur->setEnabled(true);

    if(ui->comboBoxVille2->currentIndex()==0)
    {
        QString req2="select VIS_MATRICULE,VIS_NOM,VIS_PRENOM,VIS_VILLE from visiteur order by VIS_NOM";
        QSqlQuery res2(req2);
        while(res2.next())
        {
            ui->listWidgetVisiteur->addItem(res2.value(1).toString()+" "+res2.value(2).toString()+" ("+res2.value(3).toString()+")");
            this->vectorIdVisiteur.push_back(res2.value(0).toInt());
        }
        if (ui->listWidgetVisiteur->count()==0)
        {
            ui->listWidgetVisiteur->addItem("Aucun praticien enregistré...");
            ui->listWidgetVisiteur->setEnabled(false);
        }
    }
    else
    {
        QString req2="select VIS_MATRICULE,VIS_NOM,VIS_PRENOM,VIS_VILLE from visiteur where VIS_VILLE='"+this->vectorIdType.value(ui->comboBoxVille2->currentIndex())+"'";
        QSqlQuery res2(req2);
        while(res2.next())
        {
            ui->listWidgetVisiteur->addItem(res2.value(1).toString()+" "+res2.value(2).toString()+" ("+res2.value(3).toString()+")");
            this->vectorIdVisiteur.push_back(res2.value(0).toInt());
        }
        if(ui->listWidgetVisiteur->count()==0)
        {
            ui->listWidgetVisiteur->addItem("Aucun praticien enregistré...");
            ui->listWidgetVisiteur->setEnabled(false);
        }
    }
}

void MainWindow::on_pushButtonSuppMedicament_clicked()
{
    QSqlQuery req;
    qDebug()<<"delete from medicament where MED_DEPOTLEGAL="+this->vectorIdMedicament.value(ui->listWidgetMedicament->currentIndex().row())+"";
    if (req.exec("delete from medicament where MED_DEPOTLEGAL='"+this->vectorIdMedicament.value(ui->listWidgetMedicament->currentIndex().row())+"'"))
    {
        DialogConfirmAjout* AjoutStatut=new DialogConfirmAjout();
        AjoutStatut->affiche("Suppression réalisée avec succès !");
        AjoutStatut->exec();
    }

    else
    {
        DialogConfirmAjout* AjoutStatut=new DialogConfirmAjout();
        AjoutStatut->affiche("Echec de la suppression !");
        AjoutStatut->show();
    }
    this->chargeListeMedicament();
}

void MainWindow::on_pushButtonModifMedicament_clicked()
{
    DialogModifMedicament* ModifMedicament=new DialogModifMedicament(this);
    ModifMedicament->show();
}



void MainWindow::on_pushButtonAjoutPraticien_clicked()
{
    DialogAjoutPraticien* AjoutPraticien=new DialogAjoutPraticien(this);
    AjoutPraticien->show();

    if(AjoutPraticien->exec()==QDialog::Accepted)
    {
        delete(AjoutPraticien);
    }
    else//pas moyen de se connecter
    {
        delete(AjoutPraticien);

    }
}

void MainWindow::on_pushButtonSuppPraticien_clicked()
{

    QSqlQuery req;
    qDebug()<<"delete from praticien where PRA_CODE="+this->vectorIdPraticien.value(ui->listWidgetPraticien->currentIndex().row())+"";
    if (req.exec("delete from praticien where PRA_CODE='"+this->vectorIdPraticien.value(ui->listWidgetPraticien->currentIndex().row())+"'"))
    {
        DialogConfirmAjout* AjoutStatut=new DialogConfirmAjout();
        AjoutStatut->affiche("Suppression réalisée avec succès !");
        AjoutStatut->exec();
    }

    else
    {
        DialogConfirmAjout* AjoutStatut=new DialogConfirmAjout();
        AjoutStatut->affiche("Echec de la suppression !");
        AjoutStatut->show();
    }
    this->chargeListePraticien();
}

void MainWindow::on_pushButtonModifPraticien_clicked()
{
    DialogModifPraticien* ModifPraticien=new DialogModifPraticien(this);
    ModifPraticien->show();
}
void MainWindow::on_listWidgetPraticien_clicked(const QModelIndex &index)
{
    ui->pushButtonModifPraticien->setEnabled(true);
    ui->pushButtonSuppPraticien->setEnabled(true);
}


void MainWindow::on_listWidgetMedicament_clicked(const QModelIndex &index)
{
   ui->pushButtonModifMedicament->setEnabled(true);
   ui->pushButtonSuppMedicament->setEnabled(true);
}

