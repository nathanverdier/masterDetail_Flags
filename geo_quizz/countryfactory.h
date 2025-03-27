#ifndef COUNTRYFACTORY_H
#define COUNTRYFACTORY_H

#include <QString>
#include <QList>
class QObject;

class Country;

class CountryFactory
{
public:

    static QList<QObject *> load(QString filename);
};

#endif // COUNTRYFACTORY_H
