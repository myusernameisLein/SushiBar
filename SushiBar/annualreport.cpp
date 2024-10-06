#include "annualreport.h"

//Конструктор
AnnualReport::AnnualReport(IncomeList* pInc, ExpenseRecord* pER) : ptrInc(pInc), ptrER(pER)
    { /* пусто */
    }
    //---------------------------------------------------------
void AnnualReport::display()
    {
        cout << "Годовой отчет\n--------------\n" << endl;
        cout << "Доходы\n" << endl;
        cout << "\tАрендная плата:\t\t";
        rents = ptrInc->getSumOfIncome();
        cout << rents << endl;
        cout << "Расходы\n" << endl;
        expenses = ptrER->displaySummary();
        cout << "Расходы всего:\t\t";
        cout << expenses << endl;
        // вычисляем прибыльность
        cout << "\nБаланс:\t\t\t" << (rents - expenses) << endl;
}
