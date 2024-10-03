#ifndef SPENDINGINPUTSCREEN_H
#define SPENDINGINPUTSCREEN_H

//Класс для ввода расходов
class ExpenseInputScreen
{
    private:
    ExpenseRecord* ptrExpenseRecord; // запись о расходах
    public:
    ExpenseInputScreen(ExpenseRecord*);
    void setExpense();
};

#endif // SPENDINGINPUTSCREEN_H
