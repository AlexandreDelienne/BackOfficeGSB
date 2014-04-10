#include "dialogconfirmajout.h"
#include "ui_dialogconfirmajout.h"

DialogConfirmAjout::DialogConfirmAjout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogConfirmAjout)
{
    ui->setupUi(this);

}

DialogConfirmAjout::~DialogConfirmAjout()
{
    delete ui;
}

void DialogConfirmAjout::affiche(QString string)
{
    ui->label->setText(string);
}

void DialogConfirmAjout::on_pushButton_clicked()
{
    close();
}
