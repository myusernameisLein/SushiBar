#ifndef USERINTERFACE_H
#define USERINTERFACE_H
#include "goodslist.h"
#include "goodsinputscreen.h"
#include "incomeinputscreen.h"

#include "spendinginputscreen.h"
#include "annualreport.h"
//Главный класс для запуска приложения:
//этот класс определяет взаимодействие юзера с программой.
class UserInterface
{
    private:
        goodsList* ptrgoodsList;
        goodsInputScreen* ptrgoodsInputScreen;
        IncomeList* ptrIncomeList;
        IncomeInputScreen* ptrIncomeInputScreen;
        SpendingList* ptrSpendingList;
        SpendingInputScreen* ptrSpendingInputScreen;
        AnnualReport* ptrAnnualReport;
    char ch;
    public:
        UserInterface();
        ~UserInterface();
    void interact();
}; // конец класса userInterfac
#endif // USERINTERFACE_H
