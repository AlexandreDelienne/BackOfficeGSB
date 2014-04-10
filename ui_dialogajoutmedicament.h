/********************************************************************************
** Form generated from reading UI file 'dialogajoutmedicament.ui'
**
** Created: Wed Dec 11 11:27:16 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGAJOUTMEDICAMENT_H
#define UI_DIALOGAJOUTMEDICAMENT_H

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
#include <QtGui/QSplitter>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAjoutMedicament
{
public:
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_6;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout;
    QLabel *labelDepLegal;
    QLineEdit *lineEditDepLegal;
    QLabel *labelNomComm;
    QLineEdit *lineEditNomComm;
    QLabel *labelCodeFamille;
    QComboBox *comboBoxFamilleAjout;
    QLabel *labelPrix;
    QDoubleSpinBox *doubleSpinBoxPrix;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelLogo_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *labelEffets;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelCompo;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;
    QTextEdit *textEditCompo;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelContreIndic;
    QSpacerItem *verticalSpacer_5;
    QTextEdit *textEditContreIndic;
    QTextEdit *textEditEffets;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOk;
    QPushButton *pushButtonAnnuler;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *DialogAjoutMedicament)
    {
        if (DialogAjoutMedicament->objectName().isEmpty())
            DialogAjoutMedicament->setObjectName(QString::fromUtf8("DialogAjoutMedicament"));
        DialogAjoutMedicament->resize(722, 420);
        DialogAjoutMedicament->setMinimumSize(QSize(722, 420));
        DialogAjoutMedicament->setMaximumSize(QSize(722, 420));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/leLogo"), QSize(), QIcon::Normal, QIcon::Off);
        DialogAjoutMedicament->setWindowIcon(icon);
        DialogAjoutMedicament->setStyleSheet(QString::fromUtf8("background-color:rgb(123,202,255);"));
        gridLayout_3 = new QGridLayout(DialogAjoutMedicament);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 1, 0, 1, 1);

        splitter = new QSplitter(DialogAjoutMedicament);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelDepLegal = new QLabel(layoutWidget);
        labelDepLegal->setObjectName(QString::fromUtf8("labelDepLegal"));

        gridLayout->addWidget(labelDepLegal, 0, 0, 1, 1);

        lineEditDepLegal = new QLineEdit(layoutWidget);
        lineEditDepLegal->setObjectName(QString::fromUtf8("lineEditDepLegal"));
        lineEditDepLegal->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout->addWidget(lineEditDepLegal, 0, 1, 1, 1);

        labelNomComm = new QLabel(layoutWidget);
        labelNomComm->setObjectName(QString::fromUtf8("labelNomComm"));

        gridLayout->addWidget(labelNomComm, 1, 0, 1, 1);

        lineEditNomComm = new QLineEdit(layoutWidget);
        lineEditNomComm->setObjectName(QString::fromUtf8("lineEditNomComm"));
        lineEditNomComm->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout->addWidget(lineEditNomComm, 1, 1, 1, 1);

        labelCodeFamille = new QLabel(layoutWidget);
        labelCodeFamille->setObjectName(QString::fromUtf8("labelCodeFamille"));

        gridLayout->addWidget(labelCodeFamille, 2, 0, 1, 1);

        comboBoxFamilleAjout = new QComboBox(layoutWidget);
        comboBoxFamilleAjout->setObjectName(QString::fromUtf8("comboBoxFamilleAjout"));
        comboBoxFamilleAjout->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout->addWidget(comboBoxFamilleAjout, 2, 1, 1, 1);

        labelPrix = new QLabel(layoutWidget);
        labelPrix->setObjectName(QString::fromUtf8("labelPrix"));

        gridLayout->addWidget(labelPrix, 3, 0, 1, 1);

        doubleSpinBoxPrix = new QDoubleSpinBox(layoutWidget);
        doubleSpinBoxPrix->setObjectName(QString::fromUtf8("doubleSpinBoxPrix"));
        doubleSpinBoxPrix->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout->addWidget(doubleSpinBoxPrix, 3, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        labelLogo_2 = new QLabel(layoutWidget);
        labelLogo_2->setObjectName(QString::fromUtf8("labelLogo_2"));
        labelLogo_2->setStyleSheet(QString::fromUtf8(""));
        labelLogo_2->setPixmap(QPixmap(QString::fromUtf8(":/images/leLogo")));
        labelLogo_2->setScaledContents(false);
        labelLogo_2->setWordWrap(false);

        horizontalLayout->addWidget(labelLogo_2);


        verticalLayout_4->addLayout(horizontalLayout);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelEffets = new QLabel(layoutWidget1);
        labelEffets->setObjectName(QString::fromUtf8("labelEffets"));

        verticalLayout->addWidget(labelEffets);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        labelCompo = new QLabel(layoutWidget1);
        labelCompo->setObjectName(QString::fromUtf8("labelCompo"));

        verticalLayout_2->addWidget(labelCompo);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);


        gridLayout_2->addLayout(verticalLayout_2, 1, 0, 1, 1);

        textEditCompo = new QTextEdit(layoutWidget1);
        textEditCompo->setObjectName(QString::fromUtf8("textEditCompo"));
        textEditCompo->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout_2->addWidget(textEditCompo, 1, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        labelContreIndic = new QLabel(layoutWidget1);
        labelContreIndic->setObjectName(QString::fromUtf8("labelContreIndic"));

        verticalLayout_3->addWidget(labelContreIndic);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);


        gridLayout_2->addLayout(verticalLayout_3, 2, 0, 1, 1);

        textEditContreIndic = new QTextEdit(layoutWidget1);
        textEditContreIndic->setObjectName(QString::fromUtf8("textEditContreIndic"));
        textEditContreIndic->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout_2->addWidget(textEditContreIndic, 2, 1, 1, 1);

        textEditEffets = new QTextEdit(layoutWidget1);
        textEditEffets->setObjectName(QString::fromUtf8("textEditEffets"));
        textEditEffets->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout_2->addWidget(textEditEffets, 0, 1, 1, 1);

        splitter->addWidget(layoutWidget1);

        gridLayout_3->addWidget(splitter, 1, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonOk = new QPushButton(DialogAjoutMedicament);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));
        pushButtonOk->setMinimumSize(QSize(80, 30));
        pushButtonOk->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:outset;"));

        horizontalLayout_3->addWidget(pushButtonOk);

        pushButtonAnnuler = new QPushButton(DialogAjoutMedicament);
        pushButtonAnnuler->setObjectName(QString::fromUtf8("pushButtonAnnuler"));
        pushButtonAnnuler->setMinimumSize(QSize(80, 30));
        pushButtonAnnuler->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:outset;"));

        horizontalLayout_3->addWidget(pushButtonAnnuler);


        gridLayout_3->addLayout(horizontalLayout_3, 2, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 3, 1, 1, 1);


        retranslateUi(DialogAjoutMedicament);

        QMetaObject::connectSlotsByName(DialogAjoutMedicament);
    } // setupUi

    void retranslateUi(QDialog *DialogAjoutMedicament)
    {
        DialogAjoutMedicament->setWindowTitle(QApplication::translate("DialogAjoutMedicament", "Ajout m\303\251dicament", 0, QApplication::UnicodeUTF8));
        labelDepLegal->setText(QApplication::translate("DialogAjoutMedicament", "D\303\251pot l\303\251gal :", 0, QApplication::UnicodeUTF8));
        labelNomComm->setText(QApplication::translate("DialogAjoutMedicament", "Nom commercial :", 0, QApplication::UnicodeUTF8));
        labelCodeFamille->setText(QApplication::translate("DialogAjoutMedicament", "Famille :", 0, QApplication::UnicodeUTF8));
        labelPrix->setText(QApplication::translate("DialogAjoutMedicament", "Prix \303\251chantillon :", 0, QApplication::UnicodeUTF8));
        labelLogo_2->setText(QString());
        labelEffets->setText(QApplication::translate("DialogAjoutMedicament", "Effets :", 0, QApplication::UnicodeUTF8));
        labelCompo->setText(QApplication::translate("DialogAjoutMedicament", "Composition :", 0, QApplication::UnicodeUTF8));
        labelContreIndic->setText(QApplication::translate("DialogAjoutMedicament", "Contre-indications :", 0, QApplication::UnicodeUTF8));
        pushButtonOk->setText(QApplication::translate("DialogAjoutMedicament", "&Ok", 0, QApplication::UnicodeUTF8));
        pushButtonAnnuler->setText(QApplication::translate("DialogAjoutMedicament", "&Annuler", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogAjoutMedicament: public Ui_DialogAjoutMedicament {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGAJOUTMEDICAMENT_H
