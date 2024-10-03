#include <spendinginputscreen.h>

// конструктор
ExpenseInputScreen::ExpenseInputScreen(ExpenseRecord* per) : ptrExpenseRecord(per)
{
    /*пусто*/
    }
    //------------------------------------------------------
    void ExpenseInputScreen::setExpense()
    {
    int month, day;
    string category, payee;
    float amount;
    cout << "Введите месяц (1-12): ";
    cin >> month;
    cin.ignore(80, '\n');
    cout << "Введите день (1-31): ";
    cin >> day;
    cin.ignore(80, '\n');
    cout << "Введите категорию расходов (Ремонт, Налоги): ";
    getaLine(category);
    cout << "Введите получателя (ПростоквашиноЭлектроСбыт): ";
    getaLine(payee);
    cout << "Введите сумму (39.95): ";
    cin >> amount;
    cin.ignore(80, '\n');
    // создаем новый расход
    Expense* ptrExpense = new Expense(month, day, category, payee, amount);
    // вставляем расход в список всех расходов
     ptrExpenseRecord->insertExp(ptrExpense);
}
//-----------------------------------------
