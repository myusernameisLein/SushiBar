#include "income.h"

/////////////////методы класса rentRecord//////////////////
RentRecord::~RentRecord() // деструктор
{ // удалить строки с платежами,
// удалить указатели из множества.
while (!setPtrsRR.empty())
{
iter = setPtrsRR.begin();
delete *iter;
setPtrsRR.erase(iter);
}
}
//---------------------------------------------------------
void RentRecord::insertRent(int aptNo, int month, float amount)
{
iter = setPtrsRR.begin(); // Инициализация итератора
while (iter != setPtrsRR.end()) // условие выхода
{ // если текущий объект совпадает с созданным для поиска,
if (aptNo == (*iter)->getAptNo())
{ // заносим ренту в список
(*iter)->setRent(month, amount);
return;
}
else
iter++;
} // если не нашли строку - создаем новую
RentRow* ptrRow = new RentRow(aptNo);
ptrRow->setRent(month, amount); // заносим в нее платеж
setPtrsRR.push_back(ptrRow); // заносим строку в вектор
}
//---------------------------------------------------------
void RentRecord::display() // отобразить все строки с рентами
{
cout << "\nAptNo\tЯнв Фев Мар Апр Май Июн Июл Авг Сен Окт Ноя Дек\n" << endl
<< "------------------------------------------------------------------\n" << endl;
if (setPtrsRR.empty())
cout << "***Нет платежей!***\n" << endl;
else
{
iter = setPtrsRR.begin(); //итератор на список с указателями на объекты rentRow
while (iter != setPtrsRR.end())
{
cout << (*iter)->getAptNo() << '\t'; // вывести номер комнаты
for (int j = 0; j < 12; j++) // вывести 12 арендных платежей
{
if (((*iter)->getRentNo(j)) == 0)
cout << " 0 ";
else
cout << (*iter)->getRentNo(j) << " ";
}
cout << endl;
iter++;
}
cout << endl;
cout << endl;
}
}
//---------------------------------------------------------
float RentRecord::getSumOfRents() // сумма всех платежей
{
float sumRents = 0.0;
iter = setPtrsRR.begin();
while (iter != setPtrsRR.end())
{ // плюсуем суммы всех платежей жильцов за все время
sumRents += (*iter)->getSumOfRow();
iter++;
}
return sumRents;
}
//---------------------------------------------------------
