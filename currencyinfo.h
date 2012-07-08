#ifndef CURRENCYINFO_H
#define CURRENCYINFO_H
#include <QString>

class CurrencyInfo
{
public:
    CurrencyInfo(short currencyIndex = 0);
    enum { Algeria = 0, Syria, UAE, SaudiArabia, Tunisia, Gold };

    int CurrencyID;
    QString CurrencyCode;
    bool IsCurrencyNameFeminine;
    QString EnglishCurrencyName;
    QString EnglishPluralCurrencyName;
    QString Arabic1CurrencyName;
    QString Arabic2CurrencyName;
    QString Arabic310CurrencyName;
    QString Arabic1199CurrencyName;
    short PartPrecision;
    bool IsCurrencyPartNameFeminine;
    QString EnglishCurrencyPartName;
    QString EnglishPluralCurrencyPartName;
    QString Arabic1CurrencyPartName;
    QString Arabic2CurrencyPartName;
    QString Arabic310CurrencyPartName;
    QString Arabic1199CurrencyPartName;
};

#endif // CURRENCYINFO_H
