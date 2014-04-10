#ifndef DIALOGMODIFMEDICAMENT_H
#define DIALOGMODIFMEDICAMENT_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class DialogModifMedicament;
}

class DialogModifMedicament : public QDialog
{
    Q_OBJECT

public:
    explicit DialogModifMedicament(QWidget *parent = 0);
    ~DialogModifMedicament();


private:
    Ui::DialogModifMedicament *ui;
    MainWindow * maman;
    void chargecomboBoxFamille();
    QVector<QString> vectorIdFamille;

private slots:
    void on_pushButtonAnnuler_clicked();
    void on_pushButtonOk_clicked();
};

#endif // DIALOGMODIFMEDICAMENT_H
