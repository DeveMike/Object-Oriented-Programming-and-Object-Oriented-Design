#ifndef PERSONDATA_H
#define PERSONDATA_H

#include <QDialog>

namespace Ui {
class PersonData;
}

class PersonData : public QDialog
{
    Q_OBJECT

public:
    explicit PersonData(QString, QWidget *parent = nullptr);
    ~PersonData();

private:
    Ui::PersonData *ui;
    QString username;
};

#endif // PERSONDATA_H
