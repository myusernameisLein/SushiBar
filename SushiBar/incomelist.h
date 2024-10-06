#ifndef IncomeListLIST_H
#define IncomeListLIST_H

#include "landlord.h"
#include "income.h"

//////////////////// класс IncomeList///////////////////////
//класс IncomeList. Он хранит непосредственно записи об арендной плате.
//С ним будет взаимодействовать экран добавления арендной платы.
class IncomeList
{
private:
    list <Income*> setPtrsInc; // указатели на объекты Income (по одному на жильца)
    list <Income*>::iterator iter;
    public:
    ~IncomeList();
    void insertIncomeList(int, int, float); // добавить ренту
    void display(); // отобразить все строки с рентами
    float getSumOfIncome(); // подсчитать сумму всех платежей всех жильцов
};

#endif // IncomeList_H
