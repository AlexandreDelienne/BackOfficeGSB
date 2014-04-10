#include "mainwindow.h"
#include <QApplication>
#include <QDialog>
#include <QSqlDatabase>
#include <QDebug>
#include <dialog.h>
#include <QSplashScreen>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    // Définition des informations de connexion
    db.setHostName("localhost");
    db.setDatabaseName("GSB");
    db.setUserName("adelienne");
    db.setPassword("freedent04");
    if (!db.open())
    {
        qDebug()<<"ça marche pas";
        return 0;
    }
    else//base ouverte on continue
    {
        Dialog* maBoite=new Dialog();

        QSplashScreen splash (QPixmap("logo.jpg"));
            splash.show ();
        //.... initialisations, puis
            splash.finish (maBoite); // dès qu'elle s'affiche, ceci efface le splash
            maBoite->show ();

        if(maBoite->exec()==QDialog::Accepted)
        {
            MainWindow w;
            w.show();
            delete(maBoite);
            return a.exec();
        }
        else//pas moyen de se connecter
        {
            delete(maBoite);
            return(0);
        }

    }

}

void wait (int)
{
    QEventLoop eventLoop;
    QTimer::singleShot (3500, &eventLoop, SLOT(quit()));
    eventLoop.exec ();
}
