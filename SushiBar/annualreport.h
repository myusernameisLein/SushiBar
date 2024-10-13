#ifndef ANNUALREPORT_H
#define ANNUALREPORT_H

#include "globalmethods.h"
#include "incomeinputscreen.h"
#include "spendinginputscreen.h"

//Класс годового отчета
class AnnualReport
{
    private:
        IncomeList* ptrInc; // записи доходов
        SpendingList* ptrSp; // записи расходов
        float spends, rents; // суммы доходов и расходов
    public:
        AnnualReport(IncomeList*, SpendingList*);
    void display(); // отображение годового отчета
};


#endif // ANNUALREPORT_H
