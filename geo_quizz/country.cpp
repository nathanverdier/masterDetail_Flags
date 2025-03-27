#include "country.h"

Country::Country(QString name, QString capital, QString iso, QString region, QString alt, QObject *parent)
    : QObject{parent}, m_name{name}, m_capital{capital}, m_iso{iso}, m_region{region}, m_alt{alt}
{}

QString Country::capital() const
{
    return m_capital;
}

void Country::setCapital(const QString &newCapital)
{
    if (m_capital == newCapital)
        return;
    m_capital = newCapital;
    emit capitalChanged();
}

QString Country::name() const
{
    return m_name;
}

void Country::setName(const QString &newName)
{
    if (m_name == newName)
        return;
    m_name = newName;
    emit nameChanged();
}

QString Country::iso() const
{
    return m_iso;
}

void Country::setIso(const QString &newIso)
{
    if (m_iso == newIso)
        return;
    m_iso = newIso;
    emit isoChanged();
}

QString Country::region() const
{
    return m_region;
}

void Country::setRegion(const QString &newRegion)
{
    if (m_region == newRegion)
        return;
    m_region = newRegion;
    emit regionChanged();
}

QString Country::alt() const
{
    return m_alt;
}

void Country::setAlt(const QString &newAlt)
{
    if (m_alt == newAlt)
        return;
    m_alt = newAlt;
    emit altChanged();
}
