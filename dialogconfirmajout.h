#ifndef DIALOGCONFIRMAJOUT_H
#define DIALOGCONFIRMAJOUT_H

#include <QDialog>

namespace Ui {
class DialogConfirmAjout;
}

class DialogConfirmAjout : public QDialog
{
    Q_OBJECT

public:
    explicit DialogConfirmAjout(QWidget *parent = 0);
    ~DialogConfirmAjout();
    void affiche(QString);

private slots:
    void on_pushButton_clicked();

private:
    Ui::DialogConfirmAjout *ui;
};

#endif // DIALOGCONFIRMAJOUT_H
