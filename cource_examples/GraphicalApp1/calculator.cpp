#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);

}

Calculator::~Calculator()
{
    delete ui;
    qDebug()<<"calculator olio tuhottiin";
}

void Calculator::setUsername(const QString &newUsername)
{
    username = newUsername;
    ui->labelUsername->setText(username);

}

void Calculator::on_btnSum_clicked()
{
    QString st1=ui->textNum1->text();
    QString st2=ui->textNum2->text();
    int n1=st1.toInt();
    int n2=st2.toInt();
    int res=n1+n2;
    QString result=QVariant(res).toString();
    ui->labelResult->setText(result);
}

