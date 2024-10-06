#ifndef ANNUALREPORT_H
#define ANNUALREPORT_H

#include "landlord.h"
#include "incomeinputscreen.h"
#include "spendinginputscreen.h"

//Класс годового отчета
class AnnualReport
{
    private:
        IncomeList* ptrInc; // записи доходов
        ExpenseRecord* ptrER; // записи расходов
        float expenses, rents; // суммы доходов и расходов
    public:
        AnnualReport(IncomeList*, ExpenseRecord*);
    void display(); // отображение годового отчета
};


#endif // ANNUALREPORT_H
