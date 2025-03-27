#ifndef COUNTRY_H
#define COUNTRY_H

#include <QString>
#include <QObject>

class Country : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged FINAL);
    Q_PROPERTY(QString capital READ capital WRITE setCapital NOTIFY capitalChanged FINAL);
    Q_PROPERTY(QString iso READ iso WRITE setIso NOTIFY isoChanged FINAL);
    Q_PROPERTY(QString region READ region WRITE setRegion NOTIFY regionChanged FINAL);
    Q_PROPERTY(QString alt READ alt WRITE setAlt NOTIFY altChanged FINAL);


public:
    Country(QString name, QString capital, QString iso, QString region, QString alt, QObject *parent=nullptr);
    QString capital() const;
    void setCapital(const QString &newCapital);
    QString name() const;
    void setName(const QString &newName);

    QString iso() const;
    void setIso(const QString &newIso);

    QString region() const;
    void setRegion(const QString &newRegion);

    QString alt() const;
    void setAlt(const QString &newAlt);

signals:
    void capitalChanged();
    void nameChanged();

    void isoChanged();

    void regionChanged();

    void altChanged();

private:
    QString m_name;
    QString m_capital;
    QString m_iso;
    QString m_region;
    QString m_alt;
};

#endif // COUNTRY_H
