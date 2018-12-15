#include <QNetworkReply>
#include <QNetworkRequest>

#include <QDir>
#include <QFile>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QObject>

#include "networkmanager.h"

NetworkManager::NetworkManager(QObject *parent) : QObject(parent)
{

    manager= new QNetworkAccessManager();
    connect(manager,SIGNAL(finished(QNetworkReply*)), this, SLOT(myreplyFinished(QNetworkReply*)));
}

//(function to load the webpage and receive timeseries data)
void NetworkManager::loadWebPage()
{
    QNetworkRequest request;

    QString apikey = "PALJHSVXUNYR8XKW";

    QString urlString = QString("https://www.alphavantage.co/query?function=FX_DAILY&from_symbol=EUR&to_symbol=USD&apikey=demo").arg(apikey);

    QUrl url(urlString);
    request.setUrl(url);

    QNetworkReply *reply = manager->get(request);
}


void NetworkManager::myreplyFinished(QNetworkReply *reply)
{
    QByteArray webData = reply->readAll();

    // Store requested data in a file
    QFile *file = new QFile(QDir::currentPath() + "\\FXseries.txt");
    if(file->open(QFile::Append))
    {
        file->write(webData);
        file->flush();
        file->close();
    }

    delete file;

    QList<QPair<QString,QString>> HighValues;
    QList<QPair<QString,QString>> LowValues;
    QList<QPair<QString,QString>> CloseValues;

    QJsonDocument doc = QJsonDocument::fromJson(webData);

    if(doc.isArray()==true){
        QJsonArray rootArray = doc.array();
        //retrieve array
    }

    else if (doc.isObject() == true){

        QJsonObject rootObject = doc.object();

        QJsonObject timeSeries = rootObject["Time Series FX (Daily)"].toObject();
        QStringList keys = timeSeries.keys();

        for (QString k :keys){
            QJsonObject dayValues = timeSeries[k].toObject();
            QString High = dayValues["2. high"].toString();
            QString Low = dayValues["3. low"].toString();
            QString Close = dayValues["4. close"].toString();

            QPair<QString,QString> dataItem;
            dataItem.first = k;
            dataItem.second = High;

            QPair<QString,QString> dataItem2;
            dataItem2.first = k;
            dataItem2.second = Low;

            QPair<QString,QString> dataItem3;
            dataItem3.first = k;
            dataItem3.second = Close;

            HighValues.append(dataItem);
            LowValues.append(dataItem2);
            CloseValues.append(dataItem3);

        }

    }

    for (int i=0; i<HighValues.size(); i++)
    {
        QPair<QString,QString> data = HighValues[i];

        float list = data.second.toFloat();

        QDateTime xAxisValue;
        xAxisValue.setDate(QDate::fromString(data.first,"yyyy-MM-dd"));
        xAxisValue.toMSecsSinceEpoch();

        emit highValue(QVariant(xAxisValue),QVariant(list));
    }

    for (int i=0; i<LowValues.size(); i++)
    {
        QPair<QString,QString> data = LowValues[i];

        float list = data.second.toFloat();

        QDateTime xAxisValue;
        xAxisValue.setDate(QDate::fromString(data.first,"yyyy-MM-dd"));
        xAxisValue.toMSecsSinceEpoch();

        emit lowValue(QVariant(xAxisValue),QVariant(list));
    }

    for (int i=0; i<CloseValues.size(); i++)
    {
        QPair<QString,QString> data = CloseValues[i];

        float list = data.second.toFloat();

        QDateTime xAxisValue;
        xAxisValue.setDate(QDate::fromString(data.first,"yyyy-MM-dd"));
        xAxisValue.toMSecsSinceEpoch();

        emit closeValue(QVariant(xAxisValue),QVariant(list));
    }

}

