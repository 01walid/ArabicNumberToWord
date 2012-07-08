#include "currencyinfo.h"

CurrencyInfo::CurrencyInfo(short currencyIndex)
{

    switch (currencyIndex)
    {
    case Algeria:
        CurrencyID = 0;
        CurrencyCode = "DZD";
        IsCurrencyNameFeminine = false;
        EnglishCurrencyName = "Algerian Dinar";
        EnglishPluralCurrencyName = "Algerian Dinars";
        EnglishCurrencyPartName = "Centime";
        EnglishPluralCurrencyPartName = "Centimes";
        Arabic1CurrencyName = "دينار جزائري";
        Arabic2CurrencyName = "ديناران جزائريان";
        Arabic310CurrencyName = "دنانير جزائرية";
        Arabic1199CurrencyName = "ديناراً جزائرياً";
        Arabic1CurrencyPartName = "سنتيم";
        Arabic2CurrencyPartName = "سنتيمان";
        Arabic310CurrencyPartName = "سنتيم";
        Arabic1199CurrencyPartName = "سنتيماً";
        PartPrecision = 2;
        IsCurrencyPartNameFeminine = false;
        break;
    case Syria:
        CurrencyID = 0;
        CurrencyCode = "SYP";
        IsCurrencyNameFeminine = true;
        EnglishCurrencyName = "Syrian Pound";
        EnglishPluralCurrencyName = "Syrian Pounds";
        EnglishCurrencyPartName = "Piaster";
        EnglishPluralCurrencyPartName = "Piasteres";
        Arabic1CurrencyName = "ليرة سورية";
        Arabic2CurrencyName = "ليرتان سوريتان";
        Arabic310CurrencyName = "ليرات سورية";
        Arabic1199CurrencyName = "ليرة سورية";
        Arabic1CurrencyPartName = "قرش";
        Arabic2CurrencyPartName = "قرشان";
        Arabic310CurrencyPartName = "قروش";
        Arabic1199CurrencyPartName = "قرشاً";
        PartPrecision = 2;
        IsCurrencyPartNameFeminine = false;
        break;

    case UAE:
        CurrencyID = 1;
        CurrencyCode = "AED";
        IsCurrencyNameFeminine = false;
        EnglishCurrencyName = "UAE Dirham";
        EnglishPluralCurrencyName = "UAE Dirhams";
        EnglishCurrencyPartName = "Fils";
        EnglishPluralCurrencyPartName = "Fils";
        Arabic1CurrencyName = "درهم إماراتي";
        Arabic2CurrencyName = "درهمان إماراتيان";
        Arabic310CurrencyName = "دراهم إماراتية";
        Arabic1199CurrencyName = "درهماً إماراتياً";
        Arabic1CurrencyPartName = "فلس";
        Arabic2CurrencyPartName = "فلسان";
        Arabic310CurrencyPartName = "فلوس";
        Arabic1199CurrencyPartName = "فلساً";
        PartPrecision = 2;
        IsCurrencyPartNameFeminine = false;
        break;

    case SaudiArabia:
        CurrencyID = 2;
        CurrencyCode = "SAR";
        IsCurrencyNameFeminine = false;
        EnglishCurrencyName = "Saudi Riyal";
        EnglishPluralCurrencyName = "Saudi Riyals";
        EnglishCurrencyPartName = "Halala";
        EnglishPluralCurrencyPartName = "Halalas";
        Arabic1CurrencyName = "ريال سعودي";
        Arabic2CurrencyName = "ريالان سعوديان";
        Arabic310CurrencyName = "ريالات سعودية";
        Arabic1199CurrencyName = "ريالاً سعودياً";
        Arabic1CurrencyPartName = "هللة";
        Arabic2CurrencyPartName = "هللتان";
        Arabic310CurrencyPartName = "هللات";
        Arabic1199CurrencyPartName = "هللة";
        PartPrecision = 2;
        IsCurrencyPartNameFeminine = true;
        break;

    case Tunisia:
        CurrencyID = 3;
        CurrencyCode = "TND";
        IsCurrencyNameFeminine = false;
        EnglishCurrencyName = "Tunisian Dinar";
        EnglishPluralCurrencyName = "Tunisian Dinars";
        EnglishCurrencyPartName = "milim";
        EnglishPluralCurrencyPartName = "millimes";
        Arabic1CurrencyName = "درهم إماراتي";
        Arabic2CurrencyName = "درهمان إماراتيان";
        Arabic310CurrencyName = "دراهم إماراتية";
        Arabic1199CurrencyName = "درهماً إماراتياً";
        Arabic1CurrencyPartName = "فلس";
        Arabic2CurrencyPartName = "فلسان";
        Arabic310CurrencyPartName = "فلوس";
        Arabic1199CurrencyPartName = "فلساً";
        PartPrecision = 3;
        IsCurrencyPartNameFeminine = false;
        break;

    case Gold:
        CurrencyID = 4;
        CurrencyCode = "XAU";
        IsCurrencyNameFeminine = false;
        EnglishCurrencyName = "Gram";
        EnglishPluralCurrencyName = "Grams";
        EnglishCurrencyPartName = "Milligram";
        EnglishPluralCurrencyPartName = "Milligrams";
        Arabic1CurrencyName = "جرام";
        Arabic2CurrencyName = "جرامان";
        Arabic310CurrencyName = "جرامات";
        Arabic1199CurrencyName = "جراماً";
        Arabic1CurrencyPartName = "ملجرام";
        Arabic2CurrencyPartName = "ملجرامان";
        Arabic310CurrencyPartName = "ملجرامات";
        Arabic1199CurrencyPartName = "ملجراماً";
        PartPrecision = 2;
        IsCurrencyPartNameFeminine = false;
        break;
    }
}
