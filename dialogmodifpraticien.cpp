#include "dialogmodifpraticien.h"
#include "ui_dialogmodifpraticien.h"
#include <QSqlQuery>
#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogconfirmajout.h"
#include <QComboBox>

DialogModifPraticien::DialogModifPraticien(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogModifPraticien)
{
    ui->setupUi(this);
    maman=(MainWindow *)parent;
    QString req="select * from praticien where PRA_CODE="+maman->vectorIdPraticien.value(maman->ui->listWidgetPraticien->currentIndex().row())+"";
    QSqlQuery res(req);
    res.first();
    qDebug()<<"select * from praticien where PRA_CODE="+maman->vectorIdPraticien.value(maman->ui->listWidgetPraticien->currentIndex().row())+"";
    ui->lineEditMatricule->setText(res.value(0).toString());
    ui->lineEditNom->setText(res.value(1).toString());
    ui->lineEditPrenom->setText(res.value(2).toString());
    ui->lineEditAdresse->setText(res.value(3).toString());
    ui->lineEditCP->setText(res.value(4).toString());
    ui->lineEditVille->setText(res.value(5).toString());
    ui->lineEditCN->setText(res.value(6).toString());
    chargecomboBoxType();
}

DialogModifPraticien::~DialogModifPraticien()
{
    delete ui;
}


void DialogModifPraticien::chargecomboBoxType()
{
    ui->comboBoxTypeModif->clear();
    this->vectorIdType.clear();

    ui->comboBoxTypeModif->addItem("Tous les types...");
    this->vectorIdType.push_back("&@;:");

    QString req1="select * from type_praticien";
    QSqlQuery res(req1);
   while(res.next())
        {
        ui->comboBoxTypeModif->addItem(res.value(1).toString());
        this->vectorIdType.push_back(res.value(0).toString());
        }
    ui->comboBoxTypeModif->setCurrentIndex(maman->ui->listWidgetPraticien->currentIndex().row());
   //ui->comboBoxTypeModif->setCurrentText(maman->vectorIdPraticien.value(maman->ui->listWidgetPraticien->currentIndex().row()));
}

void DialogModifPraticien::on_pushButtonAnnuler_clicked()
{
    close();
}


void DialogModifPraticien::on_pushButtonOk_clicked()
{
    qDebug()<<"void DialogModifPraticien::on_pushButtonOk_clicked()";
    QSqlQuery req;
    QString texteReq="update praticien set PRA_CODE="+
            ui->lineEditMatricule->text()+
            ", PRA_NOM='"+
            ui->lineEditNom->text()+
            "', PRA_PRENOM='"+
            ui->lineEditPrenom->text()+
            "', PRA_ADRESSE='"+
            ui->lineEditAdresse->text()+
            "', PRA_CP='"+
            ui->lineEditCP->text()+
            "', PRA_VILLE='"+
            ui->lineEditVille->text()+
            "', PRA_COEFNOTORIETE="+
            ui->lineEditCN->text()+
            ", TYP_CODE='"+
            this->vectorIdType.value(ui->comboBoxTypeModif->currentIndex())+
            "' where PRA_CODE="+
            maman->vectorIdPraticien.value(maman->ui->listWidgetPraticien->currentIndex().row())
            +
            "";
    qDebug()<<texteReq;
    if (req.exec(texteReq))
    {
        DialogConfirmAjout* AjoutStatut=new DialogConfirmAjout();
        AjoutStatut->affiche("Modification réalisée avec succès !");
        AjoutStatut->exec();
        close();
    }

    else
    {
        DialogConfirmAjout* AjoutStatut=new DialogConfirmAjout();
        AjoutStatut->affiche("Echec de la modification !");
        AjoutStatut->show();
    }
    ((MainWindow *)parent())->chargeListePraticien();
}





