#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "formconnectwindows.h"
#include "formsigninwindows.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap bkgnd("background.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
 * Evenement clique sur Inscrire
*/
void MainWindow::on_pushButton_clicked()
{
    cout<<"S'inscrire"<<endl;
    FormSignInWindows siw;
    siw.setModal(true);
    siw.exec();
}
/*
 * Evenement clique sur Connexion
*/
void MainWindow::on_connect_clicked()
{
    cout<<"Se connecter"<<endl;
    FormConnectWindows fcw;
    fcw.setModal(true);
    fcw.exec();

}
