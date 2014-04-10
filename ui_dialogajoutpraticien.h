/********************************************************************************
** Form generated from reading UI file 'dialogajoutpraticien.ui'
**
** Created: Wed Dec 11 11:27:16 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGAJOUTPRATICIEN_H
#define UI_DIALOGAJOUTPRATICIEN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_DialogAjoutPraticien
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditMatricule;
    QLabel *label_2;
    QLineEdit *lineEditNom;
    QLabel *label_3;
    QLineEdit *lineEditPrenom;
    QLabel *label_4;
    QLineEdit *lineEditAdresse;
    QLabel *label_5;
    QLineEdit *lineEditCP;
    QLabel *label_6;
    QLineEdit *lineEditVille;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_8;
    QComboBox *comboBoxTypeAjout;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOk;
    QPushButton *pushButtonAnnuler;

    void setupUi(QDialog *DialogAjoutPraticien)
    {
        if (DialogAjoutPraticien->objectName().isEmpty())
            DialogAjoutPraticien->setObjectName(QString::fromUtf8("DialogAjoutPraticien"));
        DialogAjoutPraticien->resize(400, 400);
        DialogAjoutPraticien->setMinimumSize(QSize(400, 400));
        DialogAjoutPraticien->setMaximumSize(QSize(400, 400));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/leLogo"), QSize(), QIcon::Normal, QIcon::Off);
        DialogAjoutPraticien->setWindowIcon(icon);
        DialogAjoutPraticien->setStyleSheet(QString::fromUtf8("background-color:rgb(123,202,255);"));
        gridLayout_2 = new QGridLayout(DialogAjoutPraticien);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(DialogAjoutPraticien);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditMatricule = new QLineEdit(DialogAjoutPraticien);
        lineEditMatricule->setObjectName(QString::fromUtf8("lineEditMatricule"));
        lineEditMatricule->setStyleSheet(QString::fromUtf8("border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;\n"
"background-color:white;"));

        gridLayout->addWidget(lineEditMatricule, 0, 1, 1, 1);

        label_2 = new QLabel(DialogAjoutPraticien);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEditNom = new QLineEdit(DialogAjoutPraticien);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));
        lineEditNom->setStyleSheet(QString::fromUtf8("border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;\n"
"background-color:white;"));

        gridLayout->addWidget(lineEditNom, 1, 1, 1, 1);

        label_3 = new QLabel(DialogAjoutPraticien);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEditPrenom = new QLineEdit(DialogAjoutPraticien);
        lineEditPrenom->setObjectName(QString::fromUtf8("lineEditPrenom"));
        lineEditPrenom->setStyleSheet(QString::fromUtf8("border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;\n"
"background-color:white;"));

        gridLayout->addWidget(lineEditPrenom, 2, 1, 1, 1);

        label_4 = new QLabel(DialogAjoutPraticien);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        lineEditAdresse = new QLineEdit(DialogAjoutPraticien);
        lineEditAdresse->setObjectName(QString::fromUtf8("lineEditAdresse"));
        lineEditAdresse->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout->addWidget(lineEditAdresse, 3, 1, 1, 1);

        label_5 = new QLabel(DialogAjoutPraticien);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        lineEditCP = new QLineEdit(DialogAjoutPraticien);
        lineEditCP->setObjectName(QString::fromUtf8("lineEditCP"));
        lineEditCP->setStyleSheet(QString::fromUtf8("border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;\n"
"background-color:white;"));

        gridLayout->addWidget(lineEditCP, 4, 1, 1, 1);

        label_6 = new QLabel(DialogAjoutPraticien);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        lineEditVille = new QLineEdit(DialogAjoutPraticien);
        lineEditVille->setObjectName(QString::fromUtf8("lineEditVille"));
        lineEditVille->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout->addWidget(lineEditVille, 5, 1, 1, 1);

        label_7 = new QLabel(DialogAjoutPraticien);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(DialogAjoutPraticien);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout->addWidget(doubleSpinBox, 6, 1, 1, 1);

        label_8 = new QLabel(DialogAjoutPraticien);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        comboBoxTypeAjout = new QComboBox(DialogAjoutPraticien);
        comboBoxTypeAjout->setObjectName(QString::fromUtf8("comboBoxTypeAjout"));
        comboBoxTypeAjout->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout->addWidget(comboBoxTypeAjout, 7, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonOk = new QPushButton(DialogAjoutPraticien);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));
        pushButtonOk->setMinimumSize(QSize(80, 30));
        pushButtonOk->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:outset;"));

        horizontalLayout->addWidget(pushButtonOk);

        pushButtonAnnuler = new QPushButton(DialogAjoutPraticien);
        pushButtonAnnuler->setObjectName(QString::fromUtf8("pushButtonAnnuler"));
        pushButtonAnnuler->setMinimumSize(QSize(80, 30));
        pushButtonAnnuler->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:outset;"));

        horizontalLayout->addWidget(pushButtonAnnuler);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(DialogAjoutPraticien);

        QMetaObject::connectSlotsByName(DialogAjoutPraticien);
    } // setupUi

    void retranslateUi(QDialog *DialogAjoutPraticien)
    {
        DialogAjoutPraticien->setWindowTitle(QApplication::translate("DialogAjoutPraticien", "Ajout praticien", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogAjoutPraticien", "Matricule :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DialogAjoutPraticien", "Nom :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DialogAjoutPraticien", "Pr\303\251nom :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("DialogAjoutPraticien", "Adresse :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("DialogAjoutPraticien", "Code Postal :", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("DialogAjoutPraticien", "Ville :", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("DialogAjoutPraticien", "Coefficient de notori\303\251t\303\251 :", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("DialogAjoutPraticien", "Type de praticien :", 0, QApplication::UnicodeUTF8));
        pushButtonOk->setText(QApplication::translate("DialogAjoutPraticien", "&Ok", 0, QApplication::UnicodeUTF8));
        pushButtonAnnuler->setText(QApplication::translate("DialogAjoutPraticien", "&Annuler", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogAjoutPraticien: public Ui_DialogAjoutPraticien {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGAJOUTPRATICIEN_H
