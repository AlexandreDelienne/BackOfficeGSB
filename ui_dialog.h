/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Wed Dec 11 11:27:16 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
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

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_7;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEditLogin;
    QLabel *label_3;
    QLineEdit *lineEditPasswd;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonConnexion;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonQuitter;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(259, 196);
        Dialog->setMinimumSize(QSize(259, 196));
        Dialog->setMaximumSize(QSize(259, 196));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/leLogo"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog->setWindowIcon(icon);
        Dialog->setStyleSheet(QString::fromUtf8("QDialog{\n"
"background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 255, 255), stop:0.331897 rgba(0, 0, 255, 255), stop:0.336207 rgba(255, 255, 255, 255), stop:0.672414 rgba(255, 255, 255, 255), stop:0.676724 rgba(255, 0, 0, 255))\n"
"}"));
        Dialog->setSizeGripEnabled(false);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("background:rgb(255, 255, 255);\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEditLogin = new QLineEdit(Dialog);
        lineEditLogin->setObjectName(QString::fromUtf8("lineEditLogin"));
        lineEditLogin->setStyleSheet(QString::fromUtf8("border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout->addWidget(lineEditLogin, 0, 1, 1, 1);

        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lineEditPasswd = new QLineEdit(Dialog);
        lineEditPasswd->setObjectName(QString::fromUtf8("lineEditPasswd"));
        lineEditPasswd->setStyleSheet(QString::fromUtf8("border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;"));
        lineEditPasswd->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEditPasswd, 1, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButtonConnexion = new QPushButton(Dialog);
        pushButtonConnexion->setObjectName(QString::fromUtf8("pushButtonConnexion"));
        pushButtonConnexion->setMinimumSize(QSize(90, 30));
        pushButtonConnexion->setStyleSheet(QString::fromUtf8("border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;\n"
"background-color:white;"));

        horizontalLayout_3->addWidget(pushButtonConnexion);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        pushButtonQuitter = new QPushButton(Dialog);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));
        pushButtonQuitter->setMinimumSize(QSize(90, 30));
        pushButtonQuitter->setStyleSheet(QString::fromUtf8("border-width:1px;\n"
"border-color: rgb(21, 165, 255);\n"
"border-style:inset;\n"
"background-color:white;"));

        horizontalLayout_4->addWidget(pushButtonQuitter);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(verticalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Galaxy-Swiss Bourdin - Connexion", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog", "Login :", 0, QApplication::UnicodeUTF8));
        lineEditLogin->setText(QApplication::translate("Dialog", "adelienne", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog", "Mot de passe :", 0, QApplication::UnicodeUTF8));
        lineEditPasswd->setText(QApplication::translate("Dialog", "adelienne", 0, QApplication::UnicodeUTF8));
        pushButtonConnexion->setText(QApplication::translate("Dialog", "&Connexion", 0, QApplication::UnicodeUTF8));
        pushButtonQuitter->setText(QApplication::translate("Dialog", "&Quitter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
