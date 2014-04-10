#ifndef DIALOGAJOUTMEDICAMENT_H
#define DIALOGAJOUTMEDICAMENT_H

#include <QDialog>
#include <QVector>
#include <QSqlQuery>
#include "ui_dialogajoutmedicament.h"
#include "mainwindow.h"
#include "dialogconfirmajout.h"
#include "QDebug"

/*!
 * \brief Classe DialogAjoutMedicament
 * Cette classe créé la fenêtre d'ajout de médicament
 * \author Alexandre Delienne
 * \version 1.0
 * \date 5/12/2013
 * \copyright GNU Public License.
 */

namespace Ui {
class DialogAjoutMedicament;
}

class DialogAjoutMedicament : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAjoutMedicament(QWidget *parent = 0);
    ~DialogAjoutMedicament();

private slots:

    /*!
     * \fn on_pushButtonAnnuler_clicked void
     * \brief on_pushButtonAnnuler_clicked
     *
     * Quand on clique sur le bouton Annuler, la fenêtre se ferme
     *
     */
    void on_pushButtonAnnuler_clicked();

    /*!
     * \fn on_pushButtonOk_clicked void
     * \brief on_pushButtonOk_clicked
     *
     * Quand on clique le bouton Ok, les données sont sauvegardées sur la base de données et la fenêtre se ferme. De plus, la liste des médicaments se met à jour avec un refresh.
     *
     */
    void on_pushButtonOk_clicked();

private:
    Ui::DialogAjoutMedicament *ui;

    /*!
     * \property vectorIdFamille QVector<QString>
     * \brief vectorIdFamille
     *
     * Créer un vecteur dans le quel sera stocké les identifiants des familles des médicaments depuis la base de données.
     *
     */
    QVector<QString> vectorIdFamille;

    /*!
     * \fn chargecomboBoxFamille void
     * \brief chargecomboBoxFamille
     *
     * Charge la liste dans la comboBoxFamille pour avoir la liste déroulante remplie.
     *
     */
    void chargecomboBoxFamille();
};

#endif // DIALOGAJOUTMEDICAMENT_H
