#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_btnSave_clicked()
{
    name=ui->textName->text();
    emit nameSetted();
    this->close();
}

QString Login::getName() const
{
    return name;
}

void Login::setName(const QString &newName)
{
    name = newName;
}

