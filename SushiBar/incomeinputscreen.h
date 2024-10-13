#ifndef INCOMEINPUTSCREEN_H
#define INCOMEINPUTSCREEN_H

#include "incomelist.h"
#include <goodslist.h>


////////////////////класс IncomeInputScreen //////////////////
//Экран для добавления ренты
class IncomeInputScreen
{
    private:
    goodsList* ptrgoodsList; // список товаров
    IncomeList* ptrIncomeList; // список записей о доходах
    string IncomeName; // имя товара
    float SumFood;
    int month; // за месяц
    int Fprice; // Цена товара
    string SF;
    public:
    IncomeInputScreen(goodsList* ptrGD, IncomeList* ptrInc) : ptrgoodsList(ptrGD),
    ptrIncomeList(ptrInc)
    {
    /*тут пусто*/
    }
    void setIncome(); // добавить доход за месяц
};


#endif // INCOMEINPUTSCREEN_H
