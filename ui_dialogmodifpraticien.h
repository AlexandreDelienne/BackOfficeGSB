/********************************************************************************
** Form generated from reading UI file 'dialogmodifpraticien.ui'
**
** Created: Wed Dec 11 11:27:16 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMODIFPRATICIEN_H
#define UI_DIALOGMODIFPRATICIEN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogModifPraticien
{
public:
    QVBoxLayout *verticalLayout;
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
    QLabel *label_8;
    QComboBox *comboBoxTypeModif;
    QLineEdit *lineEditCN;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOk;
    QPushButton *pushButtonAnnuler;

    void setupUi(QDialog *DialogModifPraticien)
    {
        if (DialogModifPraticien->objectName().isEmpty())
            DialogModifPraticien->setObjectName(QString::fromUtf8("DialogModifPraticien"));
        DialogModifPraticien->resize(400, 400);
        DialogModifPraticien->setMinimumSize(QSize(400, 400));
        DialogModifPraticien->setMaximumSize(QSize(400, 400));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/leLogo"), QSize(), QIcon::Normal, QIcon::Off);
        DialogModifPraticien->setWindowIcon(icon);
        DialogModifPraticien->setStyleSheet(QString::fromUtf8("background-color:rgb(123,202,255);"));
        verticalLayout = new QVBoxLayout(DialogModifPraticien);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(DialogModifPraticien);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditMatricule = new QLineEdit(DialogModifPraticien);
        lineEditMatricule->setObjectName(QString::fromUtf8("lineEditMatricule"));
        lineEditMatricule->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout->addWidget(lineEditMatricule, 0, 1, 1, 1);

        label_2 = new QLabel(DialogModifPraticien);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEditNom = new QLineEdit(DialogModifPraticien);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));
        lineEditNom->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout->addWidget(lineEditNom, 1, 1, 1, 1);

        label_3 = new QLabel(DialogModifPraticien);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEditPrenom = new QLineEdit(DialogModifPraticien);
        lineEditPrenom->setObjectName(QString::fromUtf8("lineEditPrenom"));
        lineEditPrenom->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout->addWidget(lineEditPrenom, 2, 1, 1, 1);

        label_4 = new QLabel(DialogModifPraticien);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        lineEditAdresse = new QLineEdit(DialogModifPraticien);
        lineEditAdresse->setObjectName(QString::fromUtf8("lineEditAdresse"));
        lineEditAdresse->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout->addWidget(lineEditAdresse, 3, 1, 1, 1);

        label_5 = new QLabel(DialogModifPraticien);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        lineEditCP = new QLineEdit(DialogModifPraticien);
        lineEditCP->setObjectName(QString::fromUtf8("lineEditCP"));
        lineEditCP->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout->addWidget(lineEditCP, 4, 1, 1, 1);

        label_6 = new QLabel(DialogModifPraticien);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        lineEditVille = new QLineEdit(DialogModifPraticien);
        lineEditVille->setObjectName(QString::fromUtf8("lineEditVille"));
        lineEditVille->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout->addWidget(lineEditVille, 5, 1, 1, 1);

        label_7 = new QLabel(DialogModifPraticien);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        label_8 = new QLabel(DialogModifPraticien);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        comboBoxTypeModif = new QComboBox(DialogModifPraticien);
        comboBoxTypeModif->setObjectName(QString::fromUtf8("comboBoxTypeModif"));
        comboBoxTypeModif->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout->addWidget(comboBoxTypeModif, 7, 1, 1, 1);

        lineEditCN = new QLineEdit(DialogModifPraticien);
        lineEditCN->setObjectName(QString::fromUtf8("lineEditCN"));
        lineEditCN->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout->addWidget(lineEditCN, 6, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonOk = new QPushButton(DialogModifPraticien);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));
        pushButtonOk->setMinimumSize(QSize(80, 30));
        pushButtonOk->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:outset;"));

        horizontalLayout->addWidget(pushButtonOk);

        pushButtonAnnuler = new QPushButton(DialogModifPraticien);
        pushButtonAnnuler->setObjectName(QString::fromUtf8("pushButtonAnnuler"));
        pushButtonAnnuler->setMinimumSize(QSize(80, 30));
        pushButtonAnnuler->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:outset;"));

        horizontalLayout->addWidget(pushButtonAnnuler);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogModifPraticien);

        QMetaObject::connectSlotsByName(DialogModifPraticien);
    } // setupUi

    void retranslateUi(QDialog *DialogModifPraticien)
    {
        DialogModifPraticien->setWindowTitle(QApplication::translate("DialogModifPraticien", "Modification des praticiens", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogModifPraticien", "Code :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DialogModifPraticien", "Nom :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DialogModifPraticien", "Pr\303\251nom :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("DialogModifPraticien", "Adresse :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("DialogModifPraticien", "Code Postal :", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("DialogModifPraticien", "Ville :", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("DialogModifPraticien", "Coefficient de notori\303\251t\303\251 :", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("DialogModifPraticien", "Type de praticien :", 0, QApplication::UnicodeUTF8));
        pushButtonOk->setText(QApplication::translate("DialogModifPraticien", "&Ok", 0, QApplication::UnicodeUTF8));
        pushButtonAnnuler->setText(QApplication::translate("DialogModifPraticien", "&Annuler", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogModifPraticien: public Ui_DialogModifPraticien {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMODIFPRATICIEN_H
