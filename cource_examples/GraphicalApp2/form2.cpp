#include "form2.h"
#include "mysingleton.h"
#include "ui_form2.h"

Form2::Form2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Form2)
{
    ui->setupUi(this);
    MySingleton *objectSingleton = MySingleton::getInstance();
    ui->textName->setText(objectSingleton->getName());
}

Form2::~Form2()
{
    delete ui;
}

void Form2::on_btnSave_clicked()
{
    MySingleton *objectSingleton = MySingleton::getInstance();
    objectSingleton->setName(ui->textName->text());
    //this->close();
}

