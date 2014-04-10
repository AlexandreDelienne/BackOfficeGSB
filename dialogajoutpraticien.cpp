#include "dialogajoutpraticien.h"
#include "ui_dialogajoutpraticien.h"
#include <QSqlQuery>
#include <QDebug>
#include "mainwindow.h"
#include "dialogconfirmajout.h"

DialogAjoutPraticien::DialogAjoutPraticien(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAjoutPraticien)
{
    ui->setupUi(this);
    chargecomboBoxTypePraticien();
}

DialogAjoutPraticien::~DialogAjoutPraticien()
{
    delete ui;
}

void DialogAjoutPraticien::chargecomboBoxTypePraticien()
{
    ui->comboBoxTypeAjout->clear();
    this->vectorIdType.clear();

    ui->comboBoxTypeAjout->addItem("Tout les types...");
    this->vectorIdType.push_back("&@;:");

    QString req1="select * from type_praticien";
    QSqlQuery res(req1);
   while(res.next())
        {
        ui->comboBoxTypeAjout->addItem(res.value(1).toString());
        this->vectorIdType.push_back(res.value(0).toString());
        }
}

void DialogAjoutPraticien::on_pushButtonAnnuler_clicked()
{
    close();
}

void DialogAjoutPraticien::on_pushButtonOk_clicked()
{
    QString typePraticien=this->vectorIdType.value(ui->comboBoxTypeAjout->currentIndex());
    QString txtReq="insert into praticien values ('"+ui->lineEditMatricule->text()+"','"+ui->lineEditNom->text()+"','"+ui->lineEditPrenom->text()+"','"+ui->lineEditAdresse->text()+"','"+ui->lineEditCP->text()+"','"+ui->lineEditVille->text()+"',"+QString::number(ui->doubleSpinBox->value())+",'"+typePraticien+"')";
    qDebug()<<txtReq;
    QSqlQuery req;

    if (req.exec(txtReq))
    {
        QString txtReq2="select * from praticien where PRA_CODE='"+ui->lineEditMatricule->text()+"'";
        QSqlQuery req2(txtReq2);
        if(req2.first())
        {
        ((MainWindow *)parent())->vectorIdPraticien.push_back(req2.value(0).toString());
        DialogConfirmAjout* AjoutStatut=new DialogConfirmAjout();
        AjoutStatut->affiche("Ajout réalisé avec succès !");
        AjoutStatut->exec();
        close();
        }
    }

    else
    {
        DialogConfirmAjout* AjoutStatut=new DialogConfirmAjout();
        AjoutStatut->affiche("Echec de l'ajout !");
        AjoutStatut->show();
    }
    ((MainWindow *)parent())->chargeListePraticien();

}
