#include "annualreport.h"

//Конструктор
AnnualReport::AnnualReport(IncomeList* pInc, ExpenseRecord* pER) : ptrInc(pInc), ptrER(pER)
    { /* пусто */
    }
    //---------------------------------------------------------
void AnnualReport::display()
    {
        cout << "Annual report\n--------------\n" << endl;
        cout << "Income\n" << endl;
        cout << "\tIncome:\t\t";
        rents = ptrInc->getSumOfIncome();
        cout << rents << endl;
        cout << "Expenses\n" << endl;
        expenses = ptrER->displaySummary();
        cout << "Total expenses:\t\t";
        cout << expenses << endl;
        // вычисляем прибыльность
        cout << "\nBalance:\t\t\t" << (rents - expenses) << endl;
}
