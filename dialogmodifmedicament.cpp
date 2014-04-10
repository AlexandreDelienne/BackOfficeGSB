#include "dialogmodifmedicament.h"
#include "ui_dialogmodifmedicament.h"
#include "QSqlQuery"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "dialogconfirmajout.h"

DialogModifMedicament::DialogModifMedicament(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogModifMedicament)
{
    ui->setupUi(this);
    maman=(MainWindow *)parent;
    QString req="select * from medicament where MED_DEPOTLEGAL='"+maman->vectorIdMedicament.value(maman->ui->listWidgetMedicament->currentIndex().row())+"'";
    QSqlQuery res(req);
    res.first();
    qDebug()<<"select * from medicament where MED_DEPOTLEGAL='"+maman->vectorIdMedicament.value(maman->ui->listWidgetMedicament->currentIndex().row())+"'";
    ui->lineEditDL->setText(res.value(0).toString());
    ui->lineEditNC->setText(res.value(1).toString());
    ui->textEditEffets->setText(res.value(4).toString());
    ui->textEditComposition->setText(res.value(3).toString());
    ui->textEditCI->setText(res.value(5).toString());
    ui->lineEditPrix->setText(res.value(6).toString());
    chargecomboBoxFamille();

}

DialogModifMedicament::~DialogModifMedicament()
{
    delete ui;
}

void DialogModifMedicament::on_pushButtonAnnuler_clicked()
{
    close();
}

void DialogModifMedicament::chargecomboBoxFamille()
{
    ui->comboBoxFamilleModif->clear();
    this->vectorIdFamille.clear();

    ui->comboBoxFamilleModif->addItem("Tous les médicaments...");
    this->vectorIdFamille.push_back("&@;:");

    QString req1="select * from famille";
    QSqlQuery res(req1);
   while(res.next())
        {
        ui->comboBoxFamilleModif->addItem(res.value(1).toString());
        this->vectorIdFamille.push_back(res.value(0).toString());
        }

   ui->comboBoxFamilleModif->setCurrentIndex(maman->vectorIdFamille.value(maman->ui->listWidgetMedicament->currentIndex().row()).toInt());
}

void DialogModifMedicament::on_pushButtonOk_clicked()
{
    qDebug()<<"void DialogModifMedicament::on_pushButtonOk_clicked()";
    QSqlQuery req;
    QString familleNum=maman->vectorIdFamille.value(ui->comboBoxFamilleModif->currentIndex());
    int IdFamille=((MainWindow*)parent())->ui->listWidgetMedicament->currentIndex().row();
    QString texteReq="update medicament set MED_DEPOTLEGAL='"+
            ui->lineEditDL->text()+
            "', MED_NOMCOMMERCIAL='"+
            ui->lineEditNC->text()+
            "', MED_EFFETS='"+
            ui->textEditEffets->toPlainText()+
            "', MED_COMPOSITION='"+
            ui->textEditComposition->toPlainText()+
            "', MED_CONTREINDIC='"+
            ui->textEditCI->toPlainText()+
            "', MED_PRIXECHANTILLON="+
            ui->lineEditPrix->text()+
            ", FAM_CODE='"+
            familleNum+
            //ui->comboBoxFamilleModif->currentText()+
            "' where MED_DEPOTLEGAL='"+
            maman->vectorIdMedicament.value(maman->ui->listWidgetMedicament->currentIndex().row())
            +
            "'";
    qDebug()<<vectorIdFamille<<"idFamille:"<<IdFamille;
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
    ((MainWindow *)parent())->chargeListeMedicament();
}
