#include "myhttp.h"

MyHttp::MyHttp(QObject *parent)
    : QObject{parent}
{

}

void MyHttp::getUsers(int id)
{
    QString s = QString::number(id);
    QString site_url="https://reqres.in/api/users/"+s;
    //qDebug()<<"Url="+site_url;
    QNetworkRequest request(site_url);

    getManager = new QNetworkAccessManager(this);

    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(getUserSlot(QNetworkReply*)));

    reply = getManager->get(request);
}

void MyHttp::getUserSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    //qDebug()<<"DATA="+response_data;
    // Muunna QByteArray JSON-dokumentiksi
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    // Hae JSON-objekti
    QJsonObject json_obj = json_doc.object();
    // Hae "data"-objekti
    QJsonObject data_obj = json_obj["data"].toObject();

    QString first_name = data_obj["first_name"].toString();
    QString last_name=data_obj["last_name"].toString();
    qDebug()<<"Etunimi="+first_name;
    qDebug()<<"Sukunimi="+last_name;

    reply->deleteLater();
    getManager->deleteLater();

}
