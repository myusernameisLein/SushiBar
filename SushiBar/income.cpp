#include "income.h"

/////////////////методы класса Income/////////////////////
Income::Income(int an, const string& sortName) : aptNo(an), Sort(sortName) //конструктор
{ //Алгоритм fill() помещает копию значения value (у нас это 0)
//в каждый элемент диапазона, ограниченного парой итераторов [first,last).
//Т.е. в конструкторе просто инициализируем массив значениями 0.
fill(&income[0], &income[12], 0);
}
//---------------------------------------------------------
void Income::setIncome(int m, float am) // сеттер оплата за месяц m, сумма - am
{
income[m] = am; // привязываем оплату к месяцу
}
//---------------------------------------------------------
int Income::getAptNo() // геттер запрос номера апартаментов
{
return aptNo;
}
//---------------------------------------------------------
float Income::getIncomeNo(int month) //Геттер запрос ренты за месяц month
{
    return income[month];
}
//---------------------------------------------------------
float Income::getSumOfIncome() // cумма арендных платежей в строке
{ //По умолчанию алгоритм accumulate() суммирует элементы.
 //Нужно указать точку старта, конечную точку и значение от которого начинаем прибавлять.
 //Чаще всего это ноль, но может быть и результат других вычислений.
return accumulate(&income[0], &income[12], 0);
}
//---------------------------------------------------------
string Income::getSortName()
{
    return Sort;
}

