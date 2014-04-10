/********************************************************************************
** Form generated from reading UI file 'dialogmodifmedicament.ui'
**
** Created: Wed Dec 11 11:27:16 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMODIFMEDICAMENT_H
#define UI_DIALOGMODIFMEDICAMENT_H

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
#include <QtGui/QSplitter>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogModifMedicament
{
public:
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_6;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditDL;
    QLabel *label_2;
    QLineEdit *lineEditNC;
    QLabel *label_3;
    QComboBox *comboBoxFamilleModif;
    QLabel *label_4;
    QLineEdit *lineEditPrix;
    QLabel *label_8;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_3;
    QTextEdit *textEditEffets;
    QTextEdit *textEditComposition;
    QTextEdit *textEditCI;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonOk;
    QPushButton *pushButtonAnnuler;

    void setupUi(QDialog *DialogModifMedicament)
    {
        if (DialogModifMedicament->objectName().isEmpty())
            DialogModifMedicament->setObjectName(QString::fromUtf8("DialogModifMedicament"));
        DialogModifMedicament->resize(722, 420);
        DialogModifMedicament->setMinimumSize(QSize(722, 420));
        DialogModifMedicament->setMaximumSize(QSize(722, 420));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/leLogo"), QSize(), QIcon::Normal, QIcon::Off);
        DialogModifMedicament->setWindowIcon(icon);
        DialogModifMedicament->setStyleSheet(QString::fromUtf8("background-color:rgb(123,202,255);"));
        gridLayout_3 = new QGridLayout(DialogModifMedicament);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        splitter = new QSplitter(DialogModifMedicament);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditDL = new QLineEdit(layoutWidget);
        lineEditDL->setObjectName(QString::fromUtf8("lineEditDL"));
        lineEditDL->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout->addWidget(lineEditDL, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEditNC = new QLineEdit(layoutWidget);
        lineEditNC->setObjectName(QString::fromUtf8("lineEditNC"));
        lineEditNC->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout->addWidget(lineEditNC, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        comboBoxFamilleModif = new QComboBox(layoutWidget);
        comboBoxFamilleModif->setObjectName(QString::fromUtf8("comboBoxFamilleModif"));
        comboBoxFamilleModif->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout->addWidget(comboBoxFamilleModif, 2, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        lineEditPrix = new QLineEdit(layoutWidget);
        lineEditPrix->setObjectName(QString::fromUtf8("lineEditPrix"));
        lineEditPrix->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout->addWidget(lineEditPrix, 3, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/images/leLogo")));

        verticalLayout_5->addWidget(label_8);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_3->addWidget(label_7);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        verticalLayout_4->addLayout(verticalLayout_3);


        gridLayout_2->addLayout(verticalLayout_4, 0, 0, 3, 1);

        textEditEffets = new QTextEdit(layoutWidget1);
        textEditEffets->setObjectName(QString::fromUtf8("textEditEffets"));
        textEditEffets->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout_2->addWidget(textEditEffets, 0, 1, 1, 1);

        textEditComposition = new QTextEdit(layoutWidget1);
        textEditComposition->setObjectName(QString::fromUtf8("textEditComposition"));
        textEditComposition->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout_2->addWidget(textEditComposition, 1, 1, 1, 1);

        textEditCI = new QTextEdit(layoutWidget1);
        textEditCI->setObjectName(QString::fromUtf8("textEditCI"));
        textEditCI->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout_2->addWidget(textEditCI, 2, 1, 1, 1);

        splitter->addWidget(layoutWidget1);

        verticalLayout_6->addWidget(splitter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButtonOk = new QPushButton(DialogModifMedicament);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));
        pushButtonOk->setMinimumSize(QSize(80, 30));
        pushButtonOk->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:outset;"));

        horizontalLayout->addWidget(pushButtonOk);

        pushButtonAnnuler = new QPushButton(DialogModifMedicament);
        pushButtonAnnuler->setObjectName(QString::fromUtf8("pushButtonAnnuler"));
        pushButtonAnnuler->setMinimumSize(QSize(80, 30));
        pushButtonAnnuler->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:outset;"));

        horizontalLayout->addWidget(pushButtonAnnuler);


        verticalLayout_6->addLayout(horizontalLayout);


        gridLayout_3->addLayout(verticalLayout_6, 0, 0, 1, 1);


        retranslateUi(DialogModifMedicament);

        QMetaObject::connectSlotsByName(DialogModifMedicament);
    } // setupUi

    void retranslateUi(QDialog *DialogModifMedicament)
    {
        DialogModifMedicament->setWindowTitle(QApplication::translate("DialogModifMedicament", "Modification des m\303\251dicaments", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogModifMedicament", "D\303\251pot l\303\251gal :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DialogModifMedicament", "Nom commercial :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DialogModifMedicament", "Famille :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("DialogModifMedicament", "Prix \303\251chantillon :", 0, QApplication::UnicodeUTF8));
        label_8->setText(QString());
        label_5->setText(QApplication::translate("DialogModifMedicament", "Effets :", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("DialogModifMedicament", "Composition :", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("DialogModifMedicament", "Contre-indications :", 0, QApplication::UnicodeUTF8));
        pushButtonOk->setText(QApplication::translate("DialogModifMedicament", "&Ok", 0, QApplication::UnicodeUTF8));
        pushButtonAnnuler->setText(QApplication::translate("DialogModifMedicament", "&Annuler", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogModifMedicament: public Ui_DialogModifMedicament {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMODIFMEDICAMENT_H
