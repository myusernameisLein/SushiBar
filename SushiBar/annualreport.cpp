#include "annualreport.h"

//Конструктор
AnnualReport::AnnualReport(IncomeList* pInc, SpendingList* pSp) : ptrInc(pInc), ptrSp(pSp)
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
        spends = ptrSp->displaySummary();
        cout << "Total expenses:\t\t";
        cout << spends << endl;
        // вычисляем прибыльность
        cout << "\nBalance:\t\t\t" << (rents - spends) << endl;
}
