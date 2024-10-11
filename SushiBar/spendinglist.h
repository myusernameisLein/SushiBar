#ifndef SPENDINGLIST_H
#define SPENDINGLIST_H

#include "spending.h"
#include "landlord.h"

//Класс записей о затратах
//Класс записей о затратах
class SpendingList
{
    private:
        vector<Spending*> vectPtrsSpendings; //вектор указателей на расходы
        vector<Spending*>::iterator iter;
    public:
        ~SpendingList();
        void insertSpend(Spending*);
        void display();
    float displaySummary(); // нужно для годового отчета
};

#endif // SPENDINGLIST_H
