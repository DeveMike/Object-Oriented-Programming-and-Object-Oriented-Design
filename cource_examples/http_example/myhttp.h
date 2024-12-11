#ifndef MYHTTP_H
#define MYHTTP_H

#include <QObject>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QDebug>

class MyHttp : public QObject
{
    Q_OBJECT
private:
    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;
public:
    explicit MyHttp(QObject *parent = nullptr);
    void getUsers(int);

signals:

private slots:
    void getUserSlot(QNetworkReply *reply);
};

#endif // MYHTTP_H
