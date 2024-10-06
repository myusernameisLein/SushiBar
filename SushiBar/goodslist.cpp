#include "goodslist.h"

////////////////методы класса goodsList///////////////////
goodsList::~goodsList() // деструктор
{
while (!setPtrsgoods.empty()) // удаление всех жильцов,
{ // удаление указателей из контейнера
iter = setPtrsgoods.begin();
delete *iter;
setPtrsgoods.erase(iter);
}
}
//---------------------------------------------------------
void goodsList::insertgoods(goods* ptrG)
{
setPtrsgoods.push_back(ptrG); // вставка нового жильца в список
}
//---------------------------------------------------------
string goodsList::getAptNo(string tName) // получить номер апартаментов по имени жильца
{
    string aptNo;
    iter = setPtrsgoods.begin();
    while (iter != setPtrsgoods.end())
    { // поиск жильца в списке (достаем у каждого жильца номер апартаментов)
    aptNo = (*iter)->getAptNumber();
    if (tName == ((*iter)->getName())) // сравниваем по именам и
    {
    // если получившаяся пара совпадает - значит,
    //мы нашли запись об этом жильце в списке, в этом случае
    return aptNo; // возвращаем номер его апартаментов
}
    iter++;
}
return "no"; // если нет - возвращаем -1
}
//--------------------------------------------------------

void goodsList::display() // вывод списка жильцов
{
    cout << "\nApt#\tFood type\n-------------------\n";
    if (setPtrsgoods.empty()) // если список жильцов пуст
    cout << "***Нет жильцов***\n" << endl; // выводим запись, что он пуст)
    else
    {
    iter = setPtrsgoods.begin();
    while (iter != setPtrsgoods.end()) // распечатываем всех жильцов
    {
    cout << (*iter)->getAptNumber() << " || " << (*iter)->getName() << endl;
    *iter++;
    }
    }
}
//---------------------------------------------------------
