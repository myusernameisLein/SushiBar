#include <spendinginputscreen.h>
#include "globalmethods.h"

// конструктор
SpendingInputScreen::SpendingInputScreen(SpendingList* per) : ptrSpendingList(per)
{
/*пусто*/
}
//------------------------------------------------------
void SpendingInputScreen::setSpending()
{
    int month, day;
    string category, payee;
    float amount;
    cout << "Enter month (1-12): ";
    cin >> month;
    cin.ignore(80, '\n');
    cout << "Enter day(1-31): ";
    cin >> day;
    cin.ignore(80, '\n');
    cout << "Enter category (Taxes, Repair, Producer): ";
    getaLine(category);
    cout << "Enter poluchatelya (Makfa): ";
    getaLine(payee);
    cout << "Enter amout (39.95): ";
    cin >> amount;
    cin.ignore(80, '\n');
    // создаем новый расход
    Spending* ptrSpending = new Spending(month, day, category, payee, amount);
    // вставляем расход в список всех расходов
     ptrSpendingList->insertSpend(ptrSpending);
}
//---------------------------------------------------------
