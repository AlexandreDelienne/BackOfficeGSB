#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QModelIndex>

/*!
 * \brief Back Office GSB
 * \details Application permettant la vue, la modification et la suppression des médicaments, praticiens et visiteur pour la société GSB.
 * \author Alexandre Delienne
 * \version 0.1a
 * \date 6/12/2013
 * \bug Il manque la gestion des visiteurs.
 * \copyright GNU Public License.
 */

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    /*!
     * \brief MainWindow
     * \param parent
     */
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

    /*!
     * \fn chargeListeMedicament void
     * \brief chargeListeMedicament
     *
     * Charge la liste des médicaments dans la listWidgetMedicament
     *
     */
    void chargeListeMedicament();

    /*!
     * \fn chargeListePraticien void
     * \brief chargeListePraticien
     *
     * Charge la liste des praticiens dans la listWidgetPraticien
     *
     */
    void chargeListePraticien();

    /*!
     * \fn chargeListeVisiteur void
     * \brief chargeListeVisiteur
     *
     * Charge la liste des visiteurs dans la listWidgetVisiteur
     *
     */
    void chargeListeVisiteur();

    /*!
     * \fn chargementModification void
     * \brief chargementModification
     *
     * Charge les modifications
     *
     */
    Ui::MainWindow *ui;

    /*!
     * \property vectorIdFamille QVector<QString>
     * \brief vectorIdFamille
     *
     * Créer un vecteur dans le quel sera stocké les identifiants des familles des médicaments depuis la base de données.
     *
     */
    QVector<QString> vectorIdFamille;

    /*!
     * \property vectorIdMedicament QVector<QString>
     * \brief vectorIdMedicament
     *
     * Créer un vecteur dans le quel sera stocké les identifiants des médicaments depuis la base de données.
     *
     */
    QVector<QString> vectorIdMedicament;

    /*!
     * \property vectorIdType QVector<QString>
     * \brief vectorIdType
     *
     * Créer un vecteur dans le quel sera stocké les identifiants des types de praticiens depuis la base de données.
     *
     */
    QVector<QString> vectorIdType;

    /*!
     * \property vectorIdVille QVector<QString>
     * \brief vectorIdVille
     *
     * Créer un vecteur dans le quel sera stocké les identifiants des villes depuis la base de données.
     *
     */
    QVector<QString> vectorIdVille;

    /*!
     * \property vectorIdPraticien QVector<QString>
     * \brief vectorIdPraticien
     *
     * Créer un vecteur dans le quel sera stocké les identifiants des praticiens depuis la base de données.
     *
     */
    QVector<QString> vectorIdPraticien;

    /*!
     * \property vectorIdVisiteur QVector<int>
     * \brief vectorIdVisiteur
     *
     * Créer un vecteur dans le quel sera stocké les identifiants des visiteurs depuis la base de données.
     *
     */
    QVector<int> vectorIdVisiteur;

    /*!
     * \fn chargecomboBoxFamille void
     * \brief chargecomboBoxFamille
     *
     * Charge la liste dans la comboBoxFamille pour avoir la liste déroulante remplie.
     *
     */
    void chargecomboBoxFamille();

    /*!
     * \fn chargecomboBoxTypePraticien void
     * \brief chargecomboBoxTypePraticien
     *
     * Charge la liste dans la comboBoxTypePraticien pour avoir la liste déroulante remplie.
     *
     */
    void chargecomboBoxType();

    /*!
     * \fn chargecomboBoxVille void
     * \brief chargecomboBoxVille
     *
     * Charge la liste dans la comboBoxTypeVille pour avoir la liste déroulante remplie.
     *
     */
    void chargecomboBoxVille();

    /*!
     * \fn chargecomboBoxVille2 void
     * \brief chargecomboBoxVille2
     *
     * Charge la liste dans la comboBoxTypeVille2 pour avoir la liste déroulante remplie.
     *
     */
    void chargecomboBoxVille2();


private slots:
    void on_action_Quitter_triggered();

    void on_listWidgetMedicament_activated();

    void on_pushButtonAjoutMedicament_clicked();

    void on_pushButtonSuppMedicament_clicked();

    void on_pushButtonModifMedicament_clicked();

    void on_comboBoxFamilleMain_currentIndexChanged(const QString);

    void on_comboBoxType_currentIndexChanged(const QString);

    void on_comboBoxVille_currentIndexChanged(const QString);

    void on_comboBoxVille2_currentIndexChanged(const QString);

    void on_listWidgetPraticien_clicked(const QModelIndex &index);

    void on_listWidgetMedicament_clicked(const QModelIndex &index);

    void on_pushButtonAjoutPraticien_clicked();

    void on_pushButtonSuppPraticien_clicked();

    void on_pushButtonModifPraticien_clicked();

private:



};

#endif // MAINWINDOW_H
