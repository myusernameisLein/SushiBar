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
int goodsList::getAptNo(string Fsort) // получить номер апартаментов по имени жильца
{
    int aptNo;
    iter = setPtrsgoods.begin();
    while (iter != setPtrsgoods.end())
    { // поиск жильца в списке (достаем у каждого жильца номер апартаментов)
    aptNo = (*iter)->getAptNumber();
    if (Fsort == ((*iter)->getSortName())) // сравниваем по именам и
    {
    // если получившаяся пара совпадает - значит,
    //мы нашли запись об этом жильце в списке, в этом случае
    return aptNo; // возвращаем номер его апартаментов
}
    iter++;
}
return -1; // если нет - возвращаем -1
}
//--------------------------------------------------------

void goodsList::display() // вывод списка жильцов
{
    cout << "\nFoodName\tFoodSort\tPrice#\n------------------------------------------------------\n";
    if (setPtrsgoods.empty()) // если список жильцов пуст
    cout << "***Nothing here***\n" << endl; // выводим запись, что он пуст)
    else
    {
    iter = setPtrsgoods.begin();
    while (iter != setPtrsgoods.end()) // распечатываем всех жильцов
    {
    cout << (*iter)->getName() <<  "\t||\t" << (*iter)->getSortName()<< "\t||\t " << (*iter)->getAptNumber()  << endl;
    *iter++;
    }
    }
}
//---------------------------------------------------------
string goodsList::getSortName(string FSort)
{
    string Sort;
    iter = setPtrsgoods.begin();
    while (iter != setPtrsgoods.end())
    { // поиск жильца в списке (достаем у каждого жильца номер апартаментов)
    Sort = (*iter)->getSortName();
    if (FSort == ((*iter)->getSortName())) // сравниваем по именам и
    {
    // если получившаяся пара совпадает - значит,
    //мы нашли запись об этом жильце в списке, в этом случае
    return Sort; // возвращаем номер его апартаментов
}
    iter++;
}
return "-1"; // если нет - возвращаем -1
}
