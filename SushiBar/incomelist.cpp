#include "incomelist.h"
#include "income.h"
#include "goodslist.h"
/////////////////методы класса IncomeList//////////////////
IncomeList::~IncomeList() // деструктор
{ // удалить строки с платежами,
// удалить указатели из множества.
while (!setPtrsInc.empty())
{
iter = setPtrsInc.begin();
delete *iter;
setPtrsInc.erase(iter);
}
}
//---------------------------------------------------------
void IncomeList::insertIncomeList(int aptNo, string Sort, int month, float amount)
{
    iter = setPtrsInc.begin(); // Инициализация итератора
    while (iter != setPtrsInc.end()) // условие выхода
    { // если текущий объект совпадает с созданным для поиска,
    if (aptNo == (*iter)->getAptNo())
    { // заносим ренту в список
    (*iter)->setIncome(month, amount);
    return;
    }
    else
    iter++;
    } // если не нашли строку - создаем новую
    Income* ptIncow = new Income(aptNo, Sort);
    ptIncow->setIncome(month, amount); // заносим в нее платеж
    setPtrsInc.push_back(ptIncow); // заносим строку в вектор
    }
    //---------------------------------------------------------
    void IncomeList::display() // отобразить все строки с рентами
    {
    cout << "\nSort\tJan Feb Mar Apr May Jun Jul Aug Sen Oct Nov Dec\n" << endl
    << "------------------------------------------------------------------\n" << endl;
    if (setPtrsInc.empty())
    cout << "***There is no payments!***\n" << endl;
    else
    {
    iter = setPtrsInc.begin(); //итератор на список с указателями на объекты Income
    while (iter != setPtrsInc.end())
    {
    cout << (*iter)->getSortName()<< '\t'; // вывести номер комнаты
    for (int j = 0; j < 12; j++) // вывести 12 арендных платежей
    {
    if (((*iter)->getIncomeNo(j)) == 0)
    cout << " 0 ";
    else
    cout << (*iter)->getIncomeNo(j) << " ";
    }
    cout << endl;
    iter++;
    }
    cout << endl;
    cout << endl;
    }
    }
//---------------------------------------------------------
float IncomeList::getSumOfIncome() // сумма всех платежей
{
float sumIncomes = 0.0;
iter = setPtrsInc.begin();
while (iter != setPtrsInc.end())
{ // плюсуем суммы всех платежей жильцов за все время
sumIncomes += (*iter)->getSumOfIncome();
iter++;
}
return sumIncomes;
}
//---------------------------------------------------------
