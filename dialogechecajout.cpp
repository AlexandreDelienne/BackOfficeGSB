#include "dialogechecajout.h"
#include "ui_dialogechecajout.h"

DialogEchecAjout::DialogEchecAjout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogEchecAjout)
{
    ui->setupUi(this);
}

DialogEchecAjout::~DialogEchecAjout()
{
    delete ui;
}
