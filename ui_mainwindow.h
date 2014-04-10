/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Dec 11 11:27:16 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Quitter;
    QAction *action_Changer_d_utilisateur;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *comboBoxFamilleMain;
    QListWidget *listWidgetMedicament;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonAjoutMedicament;
    QPushButton *pushButtonModifMedicament;
    QPushButton *pushButtonSuppMedicament;
    QWidget *tab_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *comboBoxVille;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QComboBox *comboBoxType;
    QListWidget *listWidgetPraticien;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonAjoutPraticien;
    QPushButton *pushButtonModifPraticien;
    QPushButton *pushButtonSuppPraticien;
    QWidget *tab_3;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QComboBox *comboBoxVille2;
    QListWidget *listWidgetVisiteur;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButtonAjoutVisiteur;
    QPushButton *pushButtonModifVisiteur;
    QPushButton *pushButtonSuppVisiteur;
    QMenuBar *menuBar;
    QMenu *menu_Fichier;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(718, 535);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/leLogo"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"background-color:rgb(123, 202, 255)\n"
"}\n"
"\n"
"QTabWidget{\n"
"background:transparent;\n"
"}"));
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        action_Quitter = new QAction(MainWindow);
        action_Quitter->setObjectName(QString::fromUtf8("action_Quitter"));
        action_Changer_d_utilisateur = new QAction(MainWindow);
        action_Changer_d_utilisateur->setObjectName(QString::fromUtf8("action_Changer_d_utilisateur"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        comboBoxFamilleMain = new QComboBox(tab);
        comboBoxFamilleMain->setObjectName(QString::fromUtf8("comboBoxFamilleMain"));
        comboBoxFamilleMain->setStyleSheet(QString::fromUtf8("border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        horizontalLayout->addWidget(comboBoxFamilleMain);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);

        listWidgetMedicament = new QListWidget(tab);
        listWidgetMedicament->setObjectName(QString::fromUtf8("listWidgetMedicament"));
        listWidgetMedicament->setEnabled(true);
        QPalette palette;
        listWidgetMedicament->setPalette(palette);
        listWidgetMedicament->setStyleSheet(QString::fromUtf8("border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout_3->addWidget(listWidgetMedicament, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButtonAjoutMedicament = new QPushButton(tab);
        pushButtonAjoutMedicament->setObjectName(QString::fromUtf8("pushButtonAjoutMedicament"));
        pushButtonAjoutMedicament->setStyleSheet(QString::fromUtf8("border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:outset;"));

        horizontalLayout_2->addWidget(pushButtonAjoutMedicament);

        pushButtonModifMedicament = new QPushButton(tab);
        pushButtonModifMedicament->setObjectName(QString::fromUtf8("pushButtonModifMedicament"));
        pushButtonModifMedicament->setEnabled(false);
        pushButtonModifMedicament->setStyleSheet(QString::fromUtf8("border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:outset;"));

        horizontalLayout_2->addWidget(pushButtonModifMedicament);

        pushButtonSuppMedicament = new QPushButton(tab);
        pushButtonSuppMedicament->setObjectName(QString::fromUtf8("pushButtonSuppMedicament"));
        pushButtonSuppMedicament->setEnabled(false);
        pushButtonSuppMedicament->setStyleSheet(QString::fromUtf8("border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:outset;"));

        horizontalLayout_2->addWidget(pushButtonSuppMedicament);


        gridLayout_3->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icone.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab, icon1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_4 = new QGridLayout(tab_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        comboBoxVille = new QComboBox(tab_2);
        comboBoxVille->setObjectName(QString::fromUtf8("comboBoxVille"));
        comboBoxVille->setStyleSheet(QString::fromUtf8("border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        horizontalLayout_4->addWidget(comboBoxVille);


        horizontalLayout_8->addLayout(horizontalLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_7->addWidget(label);

        comboBoxType = new QComboBox(tab_2);
        comboBoxType->setObjectName(QString::fromUtf8("comboBoxType"));
        comboBoxType->setStyleSheet(QString::fromUtf8("border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        horizontalLayout_7->addWidget(comboBoxType);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        gridLayout_4->addLayout(horizontalLayout_8, 0, 0, 1, 1);

        listWidgetPraticien = new QListWidget(tab_2);
        listWidgetPraticien->setObjectName(QString::fromUtf8("listWidgetPraticien"));
        listWidgetPraticien->setStyleSheet(QString::fromUtf8("border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout_4->addWidget(listWidgetPraticien, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButtonAjoutPraticien = new QPushButton(tab_2);
        pushButtonAjoutPraticien->setObjectName(QString::fromUtf8("pushButtonAjoutPraticien"));
        pushButtonAjoutPraticien->setStyleSheet(QString::fromUtf8("border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:outset;"));

        horizontalLayout_3->addWidget(pushButtonAjoutPraticien);

        pushButtonModifPraticien = new QPushButton(tab_2);
        pushButtonModifPraticien->setObjectName(QString::fromUtf8("pushButtonModifPraticien"));
        pushButtonModifPraticien->setEnabled(false);
        pushButtonModifPraticien->setStyleSheet(QString::fromUtf8("border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:outset;"));

        horizontalLayout_3->addWidget(pushButtonModifPraticien);

        pushButtonSuppPraticien = new QPushButton(tab_2);
        pushButtonSuppPraticien->setObjectName(QString::fromUtf8("pushButtonSuppPraticien"));
        pushButtonSuppPraticien->setEnabled(false);
        pushButtonSuppPraticien->setStyleSheet(QString::fromUtf8("border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:outset;"));

        horizontalLayout_3->addWidget(pushButtonSuppPraticien);


        gridLayout_4->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/icone2.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_2, icon2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_5 = new QGridLayout(tab_3);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        comboBoxVille2 = new QComboBox(tab_3);
        comboBoxVille2->setObjectName(QString::fromUtf8("comboBoxVille2"));
        comboBoxVille2->setStyleSheet(QString::fromUtf8("border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        horizontalLayout_5->addWidget(comboBoxVille2);


        gridLayout_5->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        listWidgetVisiteur = new QListWidget(tab_3);
        listWidgetVisiteur->setObjectName(QString::fromUtf8("listWidgetVisiteur"));
        listWidgetVisiteur->setStyleSheet(QString::fromUtf8("border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout_5->addWidget(listWidgetVisiteur, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pushButtonAjoutVisiteur = new QPushButton(tab_3);
        pushButtonAjoutVisiteur->setObjectName(QString::fromUtf8("pushButtonAjoutVisiteur"));
        pushButtonAjoutVisiteur->setStyleSheet(QString::fromUtf8("border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:outset;"));

        horizontalLayout_6->addWidget(pushButtonAjoutVisiteur);

        pushButtonModifVisiteur = new QPushButton(tab_3);
        pushButtonModifVisiteur->setObjectName(QString::fromUtf8("pushButtonModifVisiteur"));
        pushButtonModifVisiteur->setStyleSheet(QString::fromUtf8("border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:outset;"));

        horizontalLayout_6->addWidget(pushButtonModifVisiteur);

        pushButtonSuppVisiteur = new QPushButton(tab_3);
        pushButtonSuppVisiteur->setObjectName(QString::fromUtf8("pushButtonSuppVisiteur"));
        pushButtonSuppVisiteur->setStyleSheet(QString::fromUtf8("border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:outset;"));

        horizontalLayout_6->addWidget(pushButtonSuppVisiteur);


        gridLayout_5->addLayout(horizontalLayout_6, 2, 0, 1, 1);

        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/icone3.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_3, icon3, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 718, 19));
        menu_Fichier = new QMenu(menuBar);
        menu_Fichier->setObjectName(QString::fromUtf8("menu_Fichier"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_Fichier->menuAction());
        menu_Fichier->addAction(action_Changer_d_utilisateur);
        menu_Fichier->addAction(action_Quitter);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Galaxy-Swiss Bourdin", 0, QApplication::UnicodeUTF8));
        action_Quitter->setText(QApplication::translate("MainWindow", "&Quitter", 0, QApplication::UnicodeUTF8));
        action_Changer_d_utilisateur->setText(QApplication::translate("MainWindow", "&Changer d'utilisateur...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Famille :", 0, QApplication::UnicodeUTF8));
        pushButtonAjoutMedicament->setText(QApplication::translate("MainWindow", "&Ajouter", 0, QApplication::UnicodeUTF8));
        pushButtonModifMedicament->setText(QApplication::translate("MainWindow", "&Modifier", 0, QApplication::UnicodeUTF8));
        pushButtonSuppMedicament->setText(QApplication::translate("MainWindow", "&Supprimer", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "&M\303\251dicaments", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Ville :", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Type de praticien :", 0, QApplication::UnicodeUTF8));
        pushButtonAjoutPraticien->setText(QApplication::translate("MainWindow", "&Ajouter", 0, QApplication::UnicodeUTF8));
        pushButtonModifPraticien->setText(QApplication::translate("MainWindow", "&Modifier", 0, QApplication::UnicodeUTF8));
        pushButtonSuppPraticien->setText(QApplication::translate("MainWindow", "&Supprimer", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "&Praticiens", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Ville :", 0, QApplication::UnicodeUTF8));
        pushButtonAjoutVisiteur->setText(QApplication::translate("MainWindow", "&Ajouter", 0, QApplication::UnicodeUTF8));
        pushButtonModifVisiteur->setText(QApplication::translate("MainWindow", "&Modifier", 0, QApplication::UnicodeUTF8));
        pushButtonSuppVisiteur->setText(QApplication::translate("MainWindow", "&Supprimer", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "&Visiteurs", 0, QApplication::UnicodeUTF8));
        menu_Fichier->setTitle(QApplication::translate("MainWindow", "&Fichier", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
