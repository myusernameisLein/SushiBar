#ifndef INCOMEINPUTSCREEN_H
#define INCOMEINPUTSCREEN_H

#include "landlord.h"
#include "incomelist.h"
#include <goodslist.h>


////////////////////класс IncomeInputScreen //////////////////
//Экран для добавления ренты
class IncomeInputScreen
{
    private:
    goodsList* ptrgoodsList; // список жильцов
    IncomeList* ptrIncomeList; // список записей об оплате
    string IncomeName; // имя жильца, который платит ренту
    float IncomePaid; // рента
    int month; // за месяц
    int aptNo; // по апартаментам
    public:
    IncomeInputScreen(goodsList* ptrGD, IncomeList* ptrInc) : ptrgoodsList(ptrGD),
    ptrIncomeList(ptrInc)
    {
    /*тут пусто*/
    }
    void setIncome(); // добавить арендную плату одного жильца за месяц
};


#endif // INCOMEINPUTSCREEN_H
