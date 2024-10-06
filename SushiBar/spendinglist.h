#ifndef SPENDINGLIST_H
#define SPENDINGLIST_H

#include "spending.h"
#include "landlord.h"

//Класс записей о затратах
//Класс записей о затратах
class ExpenseRecord
{
    private:
        vector<Expense*> vectPtrsExpenses; //вектор указателей на расходы
        vector<Expense*>::iterator iter;
    public:
        ~ExpenseRecord();
        void insertExp(Expense*);
        void display();
    float displaySummary(); // нужно для годового отчета
};

#endif // SPENDINGLIST_H
