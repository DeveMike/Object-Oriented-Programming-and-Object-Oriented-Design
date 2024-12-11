#include "form1.h"
#include "mysingleton.h"
#include "ui_form1.h"

Form1::Form1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Form1)
{
    ui->setupUi(this);
    MySingleton *objectSingleton = MySingleton::getInstance();
    ui->textName->setText(objectSingleton->getName());
}

Form1::~Form1()
{
    delete ui;
}

void Form1::on_btnSave_clicked()
{
    MySingleton *objectSingleton = MySingleton::getInstance();
    objectSingleton->setName(ui->textName->text());
    //this->close();
}

