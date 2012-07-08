#include "numbertoword.h"
#include <qmath.h>
#include <QDebug>

NumberToWord::NumberToWord(double number, short currencyIndex, QString ArabicPrefixText, QString ArabicSuffixText)
{
    Currency = CurrencyInfo(currencyIndex);
    this->number = number;
    this->ArabicPrefixText = ArabicPrefixText;
    this->ArabicSuffixText = ArabicSuffixText;

    ExtractIntegerAndDecimalParts();
    arabicOnes = QStringList() << QString::null
    << "واحد"
    << "اثنان"
    << "ثلاثة"
    << "أربعة"
    << "خمسة"
    << "ستة"
    << "سبعة"
    << "ثمانية"
    << "تسعة"
    << "عشرة"
    << "أحد عشر"
    << "اثنا عشر"
    << "ثلاثة عشر"
    << "أربعة عشر"
    << "خمسة عشر"
    << "ستة عشر"
    << "سبعة عشر"
    << "ثمانية عشر"
    << "تسعة عشر";

    arabicFeminineOnes <<  QStringList() << QString::null
    << "إحدى"
    << "اثنتان"
    << "ثلاث"
    << "أربع"
    << "خمس"
    << "ست"
    << "سبع"
    << "ثمان"
    << "تسع"
    << "عشر"
    << "إحدى عشرة"
    << "اثنتا عشرة"
    << "ثلاث عشرة"
    << "أربع عشرة"
    << "خمس عشرة"
    << "ست عشرة"
    << "سبع عشرة"
    << "ثماني عشرة"
    << "تسع عشرة";

    arabicTens << "عشرون"
    << "ثلاثون"
    << "أربعون"
    << "خمسون"
    << "ستون"
    << "سبعون"
    << "ثمانون"
    << "تسعون";

    arabicHundreds << ""
    << "مائة"
    << "مئتان"
    << "ثلاثمائة"
    << "أربعمائة"
    << "خمسمائة"
    << "ستمائة"
    << "سبعمائة"
    << "ثمانمائة"
    << "تسعمائة";

    arabicTwos << "مئتان"
    << "ألفان"
    << "مليونان"
    << "ملياران"
    << "تريليونان"
    << "كوادريليونان"
    << "كوينتليونان"
    << "سكستيليونان";

    arabicAppendedTwos << "مئتا"
    << "ألفا"
    << "مليونا"
    << "مليارا"
    << "تريليونا"
    << "كوادريليونا"
    << "كوينتليونا"
    << "سكستيليونا";

    arabicGroup << "مائة"
    << "ألف"
    << "مليون"
    << "مليار"
    << "تريليون"
    << "كوادريليون"
    << "كوينتليون"
    << "سكستيليون";

    arabicAppendedGroup << QString::null
    << "ألفاً"
    << "مليوناً"
    << "ملياراً"
    << "تريليوناً"
    << "كوادريليوناً"
    << "كوينتليوناً"
    << "سكستيليوناً";

    arabicPluralGroups << QString::null
    << "آلاف"
    << "ملايين"
    << "مليارات"
    << "تريليونات"
    << "كوادريليونات"
    << "كوينتليونات"
    << "سكستيليونات";
}

QString NumberToWord::ToArWords(double n)
{
    return ConvertToArabic();
}

QString NumberToWord::ConvertToArabic()
{
    if (number == 0)
    {
        return "صفر";
    }

    double tempNumber = number;

    // Get Text for the decimal part

    QString decimalString = ProcessArabicGroup(_decimalValue, -1, 0);


    QString retVal = QString::null;
    short group = 0;

    while (tempNumber >= 1)
    {
        // seperate number into groups
        int numberToProcess = (int)(tempNumber) % 1000;

        tempNumber = tempNumber / 1000;

        // convert group into its text

        QString groupDescription = ProcessArabicGroup(numberToProcess, group, qFloor(tempNumber));

        if (!groupDescription.isEmpty())
        { // here we add the new converted group to the previous concatenated text
            if (group > 0)
            {
                if (!retVal.isEmpty())
                    retVal = QString("%1 %2").arg("و", retVal);

                if (numberToProcess != 2)
                {
                    if (numberToProcess % 100 != 1)
                    {
                        if (numberToProcess >= 3 && numberToProcess <= 10) // for numbers between 3 and 9 we use plural name
                            retVal = QString("%1 %2").arg(arabicPluralGroups[group], retVal);
                        else
                        {
                            if (!retVal.isEmpty()) // use appending case
                                retVal = QString("%1 %2").arg(arabicAppendedGroup[group], retVal);
                            else
                                retVal = QString("%1 %2").arg(arabicGroup[group], retVal); // use normal case
                        }
                    }
                }
            }

            retVal = QString("%1 %2").arg(groupDescription, retVal);
        }

        group++;
    }

    QString formattedNumber = QString::null;
    formattedNumber += (!ArabicPrefixText.isEmpty()) ? QString("%1 ").arg(ArabicPrefixText) : QString::null;
    formattedNumber += (!retVal.isEmpty()) ? retVal : QString::null;
    if (_intergerValue != 0)
    { // here we add currency name depending on _intergerValue : 1 ,2 , 3--->10 , 11--->99
        int remaining100 = (int)(_intergerValue % 100);

        if (remaining100 == 0)
            formattedNumber += Currency.Arabic1CurrencyName;
        else
            if (remaining100 == 1)
                formattedNumber += Currency.Arabic1CurrencyName;
            else
                if (remaining100 == 2)
                {
                    if (_intergerValue == 2)
                        formattedNumber += Currency.Arabic2CurrencyName;
                    else
                        formattedNumber += Currency.Arabic1CurrencyName;
                }
                else
                /*    if( number > 100) formattedNumber += Currency.Arabic1CurrencyName;
                    else*/ if (remaining100 >= 3 && remaining100 <= 10)
                        formattedNumber += Currency.Arabic310CurrencyName;
                    else
                        if (remaining100 >= 11 && remaining100 <= 99)
                            formattedNumber += Currency.Arabic1199CurrencyName;
    }
    formattedNumber += (_decimalValue != 0) ? " و " : "";
    formattedNumber += (_decimalValue != 0) ? decimalString : "";
    if (_decimalValue != 0)
    { // here we add currency part name depending on _intergerValue : 1 ,2 , 3--->10 , 11--->99
        formattedNumber += " ";

        int remaining100 = (int)(_decimalValue % 100);

        if (remaining100 == 0)
            formattedNumber += Currency.Arabic1CurrencyPartName;
        else
            if (remaining100 == 1)
                formattedNumber += Currency.Arabic1CurrencyPartName;
            else
                if (remaining100 == 2)
                    formattedNumber += Currency.Arabic2CurrencyPartName;
                else
                    if (remaining100 >= 3 && remaining100 <= 10)
                        formattedNumber += Currency.Arabic310CurrencyPartName;
                    else
                        if (remaining100 >= 11 && remaining100 <= 99)
                            formattedNumber += Currency.Arabic1199CurrencyPartName;
    }
    formattedNumber += (!ArabicSuffixText.isEmpty()) ? QString(" %1").arg(ArabicSuffixText) : "";

    return formattedNumber;
}

QString NumberToWord::ProcessArabicGroup(int groupNumber, int groupLevel, qulonglong remainingNumber)
{
    int tens = groupNumber % 100;

    int hundreds = groupNumber / 100;

    QString retVal = "";

    if (hundreds > 0)
    {
        if (tens == 0 && hundreds == 2) // حالة المضاف
            retVal = QString("%1").arg(arabicAppendedTwos[0]);
        else //  الحالة العادية
            retVal = QString("%1").arg(arabicHundreds[hundreds]);
    }

    if (tens > 0)
    {
        if (tens < 20)
        { // if we are processing under 20 numbers
            if (tens == 2 && hundreds == 0 && groupLevel > 0)
            { // This is special case for number 2 when it comes alone in the group
                if (_intergerValue == 2000 || _intergerValue == 2000000 || _intergerValue == 2000000000 || _intergerValue == 2000000000000 || _intergerValue == 2000000000000000 || _intergerValue == 2000000000000000000)
                    retVal = QString("%1").arg(arabicAppendedTwos[groupLevel]); // في حالة الاضافة
                else
                    retVal = QString("%1").arg(arabicTwos[groupLevel]);//  في حالة الافراد
            }
            else
            { // General case
                if (!retVal.isEmpty())
                    retVal += " و ";

                if (tens == 1 && groupLevel > 0)
                    retVal += arabicGroup[groupLevel];
                else
                    if ((tens == 1 || tens == 2) && (groupLevel == 0 || groupLevel == -1) && hundreds == 0 && remainingNumber == 0)
                        retVal += QString::null; // Special case for 1 and 2 numbers like: ليرة سورية و ليرتان سوريتان
                    else
                        retVal += GetDigitFeminineStatus(tens, groupLevel);// Get Feminine status for this digit
            }
        }
        else
        {
            int ones = tens % 10;
            tens = (tens / 10) - 2; // 20's offset

            if (ones > 0)
            {
                if (!retVal.isEmpty())
                    retVal += " و ";

                // Get Feminine status for this digit
                retVal += GetDigitFeminineStatus(ones, groupLevel);
            }

            if (!retVal.isEmpty())
                retVal += " و ";

            // Get Tens text
            retVal += arabicTens[tens];
        }
    }

    return retVal;
}

QString NumberToWord::GetDigitFeminineStatus(int digit, int groupLevel)
{
    if (groupLevel == -1)
    { // if it is in the decimal part
        if (Currency.IsCurrencyPartNameFeminine)
            return arabicFeminineOnes.at(digit); // use feminine field
        else
            return arabicOnes.at(digit);
    }
    else
        if (groupLevel == 0)
        {
            if (Currency.IsCurrencyNameFeminine)
                return arabicFeminineOnes.at(digit);// use feminine field
            else
                return arabicOnes.at(digit);
        }
        else
            return arabicOnes.at(digit);

}

void NumberToWord::ExtractIntegerAndDecimalParts()
{
    QStringList splits = QString::number(number).split('.');

                bool ok;
                _intergerValue = splits.at(0).toULongLong(&ok);

                if(!ok) _intergerValue = 0;

                ok = false; // assuming there is no decimal value by default
                if (splits.count() > 1)
                    _decimalValue = GetDecimalValue(splits.at(1)).toULongLong(&ok);

                if(!ok) _decimalValue = 0;
}

QString NumberToWord::GetDecimalValue(QString decimalPart)
{
    QString result = "";
    ushort len = decimalPart.length();

    if (Currency.PartPrecision != len)
    {
        result = QString("%1").arg(decimalPart.remove(Currency.PartPrecision, len));
    }
    else
        result = decimalPart;

    return result;
}
