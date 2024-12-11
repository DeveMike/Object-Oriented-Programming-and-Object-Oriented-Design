#include "form1.h"
#include "form2.h"
#include "mainwindow.h"
#include "mysingleton.h"
#include "persondata.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->btnForm3->setHidden(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnLogin_clicked()
{
    objLogin=new Login(this);
    connect(objLogin, SIGNAL(nameSetted()), this, SLOT(getUsernameSlot()));
    objLogin->show();
}

void MainWindow::getUsernameSlot()
{
    username=objLogin->getName();
    ui->labelUsername->setText(username);
}


void MainWindow::on_btnForm1_clicked()
{
    ui->btnForm3->setHidden(false);
    Form1 *objForm1=new Form1(this);
    objForm1->show();
}


void MainWindow::on_btnForm2_clicked()
{
    ui->btnForm3->setHidden(false);
    Form2 *objForm2=new Form2(this);
    objForm2->show();

}


void MainWindow::on_btnForm3_clicked()
{
    MySingleton *objectSingleton = MySingleton::getInstance();
    ui->labelName->setText(objectSingleton->getName());
}


void MainWindow::on_btnPersonData_clicked()
{
    if(username.length()==0){
        username="Vierailija";
    }
    PersonData *objPersonData=new PersonData(username, this);
    objPersonData->show();
}

