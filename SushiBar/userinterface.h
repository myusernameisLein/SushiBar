#ifndef USERINTERFACE_H
#define USERINTERFACE_H
#include "goodslist.h"
#include "goodsinputscreen.h"
#include "incomeinputscreen.h"
#include "orderlist.h"
#include "orderinputscreen.h"
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
        OrderList* ptrOrderList;
        OrderInputScreen* ptrOrderInputScreen;
    char ch;
    public:
        UserInterface();
        ~UserInterface();
    void interact();
}; // конец класса userInterfac
#endif // USERINTERFACE_H
