#ifndef SPENDINGINPUTSCREEN_H
#define SPENDINGINPUTSCREEN_H


#include "spendinglist.h"

//Класс для ввода расходов
class SpendingInputScreen
{
    private:
        SpendingList* ptrSpendingList; // запись о расходах
    public:
        SpendingInputScreen(SpendingList*);
    void setSpending();
};

#endif // SPENDINGINPUTSCREEN_H
