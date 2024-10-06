#include "tenantlist.h"

////////////////методы класса TenantList///////////////////
TenantList::~TenantList() // деструктор
{
while (!setPtrsTens.empty()) // удаление всех жильцов,
{ // удаление указателей из контейнера
iter = setPtrsTens.begin();
delete *iter;
setPtrsTens.erase(iter);
}
}
//---------------------------------------------------------
void TenantList::insertTenant(Tenant* ptrT)
{
setPtrsTens.push_back(ptrT); // вставка нового жильца в список
}
//---------------------------------------------------------
int TenantList::getAptNo(string tName) // получить номер апартаментов по имени жильца
{
int aptNo;
iter = setPtrsTens.begin();
while (iter != setPtrsTens.end())
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
return -1; // если нет - возвращаем -1
}
//--------------------------------------------------------

void TenantList::display() // вывод списка жильцов
{
cout << "\nApt#\tИмя жильца\n-------------------\n";
if (setPtrsTens.empty()) // если список жильцов пуст
cout << "***Нет жильцов***\n" << endl; // выводим запись, что он пуст)
else
{
iter = setPtrsTens.begin();
while (iter != setPtrsTens.end()) // распечатываем всех жильцов
{
cout << (*iter)->getAptNumber() << " || " << (*iter)->getName() << endl;
*iter++;
}
}
}
//---------------------------------------------------------
