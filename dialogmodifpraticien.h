#ifndef DIALOGMODIFPRATICIEN_H
#define DIALOGMODIFPRATICIEN_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class DialogModifPraticien;
}

class DialogModifPraticien : public QDialog
{
    Q_OBJECT

public:
    explicit DialogModifPraticien(QWidget *parent = 0);
    ~DialogModifPraticien();

private slots:


    void on_pushButtonAnnuler_clicked();

    void on_pushButtonOk_clicked();


private:
    Ui::DialogModifPraticien *ui;
    MainWindow * maman;
    void chargecomboBoxType();
    QVector<QString> vectorIdType;
};

#endif // DIALOGMODIFPRATICIEN_H
