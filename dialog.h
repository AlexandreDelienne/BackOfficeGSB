#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

/*!
 * \brief Classe Dialog
 * Cette classe créé la fenêtre de connexion.
 * \author Alexandre Delienne
 * \version 1.0
 * \date 5/12/2013
 * \copyright GNU Public License.
 */

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:

    /*!
     * \fn on_pushButtonConnexion_clicked void
     * \brief on_pushButtonConnexion_clicked
     *
     * Quand on clique sur le bouton connexion on compare les informations avec les données de la base de données. On ferme la fenêtre de connexion et on appelle la fenêtre principale : la MainWindow
     *
     */
    void on_pushButtonConnexion_clicked();

    /*!
     * \fn on_pushButtonQuitter_clicked void
     * \brief on_pushButtonQuitter_clicked
     *
     * Quand on clique sur le bouton quitter on ferme le programme.
     *
     */
    void on_pushButtonQuitter_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
