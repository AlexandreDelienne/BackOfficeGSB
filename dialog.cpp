#include "dialog.h"
#include "ui_dialog.h"
#include "mainwindow.h"
#include <QDebug>
#include <QSqlQuery>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButtonConnexion_clicked()
{
    QString stringRequete="select count(*) from superuser where login=\'"+ui->lineEditLogin->text()+"\' and pass=\'"+ui->lineEditPasswd->text()+"\'";
    QSqlQuery requete(stringRequete);
    requete.next();
    if(requete.value(0).toInt()==1)
    {
        accept();
    }
    else
    {
        reject();
    }

}

void Dialog::on_pushButtonQuitter_clicked()
{
    reject();
}
