#ifndef DIALOGAJOUTPRATICIEN_H
#define DIALOGAJOUTPRATICIEN_H

#include <QDialog>
#include <QVector>

/*!
 * \brief Classe DialogAjoutPraticien
 * Cette classe créé la fenêtre d'ajout de praticien
 * \author Alexandre Delienne
 * \version 1.0
 * \date 5/12/2013
 * \copyright GNU Public License.
 */

namespace Ui {
class DialogAjoutPraticien;
}

class DialogAjoutPraticien : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAjoutPraticien(QWidget *parent = 0);
    ~DialogAjoutPraticien();

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
    Ui::DialogAjoutPraticien *ui;

    /*!
     * \property vectorIdType QVector<QString>
     * \brief vectorIdType
     *
     * Créer un vecteur dans le quel sera stocké les identifiants des types de praticiens depuis la base de données.
     *
     */
    QVector<QString> vectorIdType;

    /*!
     * \fn chargecomboBoxTypePraticien void
     * \brief chargecomboBoxTypePraticien
     *
     * Charge la liste dans la comboBoxTypePraticien pour avoir la liste déroulante remplie.
     *
     */
    void chargecomboBoxTypePraticien();
};

#endif // DIALOGAJOUTPRATICIEN_H
