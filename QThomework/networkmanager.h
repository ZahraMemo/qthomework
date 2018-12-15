#ifndef NETWORKMANAGER_H
#define NETWORKMANAGER_H

#include <QNetworkAccessManager>
#include <QObject>
#include <QVariant>

//header file providing definitions for the functions, signals and slots
class NetworkManager : public QObject
{
    Q_OBJECT

    QNetworkAccessManager* manager;

public:
    explicit NetworkManager(QObject *parent = 0);
    void loadWebPage();

signals:
    void highValue(QVariant x, QVariant y);
    void lowValue(QVariant x, QVariant y);
    void closeValue(QVariant x, QVariant y);

public slots:
    void myreplyFinished(QNetworkReply *reply);

};

#endif // NETWORKMANAGER_H
