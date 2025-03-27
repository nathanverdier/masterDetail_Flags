#include "countryfactory.h"

#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include "country.h"


QList<QObject *> CountryFactory::load(QString filename) {
    QFile file(filename);

    file.open(QIODevice::ReadOnly);
    QByteArray data = file.readAll();

    QJsonDocument doc(QJsonDocument::fromJson(data));
    QJsonValue objet = doc["countries"];

    QJsonArray liste = objet["country"].toArray();

    QList<QObject *> countrys;

    for ( QJsonValue value : liste) {
        countrys.push_back(new Country(value["name"].toString(), value["capital"].toString(), value["@iso"].toString(), value["region"].toString(), value["alt"].toString()));
    }

    return countrys;
}
