#ifndef NUMBERTOWORD_H
#define NUMBERTOWORD_H

#include <QObject>
#include <QStringList>
#include "currencyinfo.h"

class NumberToWord : public QObject
{
public:

    NumberToWord(double number, short currencyIndex = 0,  QString ArabicPrefixText = "فقط", QString ArabicSuffixText = "لا غير");

    QString ToArWords(double n);

    QString ConvertToArabic();

    double number;

    QString ArabicPrefixText;

    QString ArabicSuffixText;

private:

    QStringList arabicOnes;

    QStringList arabicFeminineOnes;

    QStringList arabicTens;

    QStringList arabicHundreds;

    QStringList arabicTwos;

    QStringList arabicAppendedTwos;

    QStringList arabicGroup;

    QStringList arabicAppendedGroup;

    QStringList arabicPluralGroups;

    QString ProcessArabicGroup(int groupNumber, int groupLevel, qulonglong remainingNumber);

    QString GetDigitFeminineStatus(int digit, int groupLevel);

    quint64 _intergerValue;

    CurrencyInfo Currency;

    int _decimalValue;

    void ExtractIntegerAndDecimalParts();

    QString GetDecimalValue(QString decimalPart);


};

#endif // NUMBERTOWORD_H
