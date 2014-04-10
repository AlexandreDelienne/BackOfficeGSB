#include "dialogajoutmedicament.h"

DialogAjoutMedicament::DialogAjoutMedicament(QWidget * parent) :
    QDialog(parent),
    ui(new Ui::DialogAjoutMedicament)
{
    ui->setupUi(this);
    this->chargecomboBoxFamille();
}

DialogAjoutMedicament::~DialogAjoutMedicament()
{
    delete ui;
}

void DialogAjoutMedicament::on_pushButtonAnnuler_clicked()
{
    close();
}


void DialogAjoutMedicament::chargecomboBoxFamille()
{
    ui->comboBoxFamilleAjout->clear();
    this->vectorIdFamille.clear();

    ui->comboBoxFamilleAjout->addItem("Toutes les familles...");
    this->vectorIdFamille.push_back("&@;:");

    QString req1="select * from famille";
    QSqlQuery res(req1);
   while(res.next())
        {
        ui->comboBoxFamilleAjout->addItem(res.value(1).toString());
        this->vectorIdFamille.push_back(res.value(0).toString());
        }
}

void DialogAjoutMedicament::on_pushButtonOk_clicked()
{
    QString familleNum=this->vectorIdFamille.value(ui->comboBoxFamilleAjout->currentIndex());
    QString txtReq="insert into medicament values ('"+ui->lineEditDepLegal->text()+"','"+ui->lineEditNomComm->text()+"','"+familleNum+"','"+ui->textEditCompo->toPlainText()+"','"+ui->textEditEffets->toPlainText()+"','"+ui->textEditContreIndic->toPlainText()+"',"+QString::number(ui->doubleSpinBoxPrix->value())+")";
    qDebug()<<txtReq;
    QSqlQuery req;

    if (req.exec(txtReq))
    {
        QString txtReq2="select MED_DEPOTLEGAL from medicament where MED_DEPOTLEGAL='"+ui->lineEditDepLegal->text()+"'";
        QSqlQuery req2(txtReq2);
        if(req2.first())
        {
        ((MainWindow *)parent())->vectorIdMedicament.push_back(req2.value(0).toString());
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
    ((MainWindow *)parent())->chargeListeMedicament();


}
