#ifndef GOODSLIST_H
#define GOODSLIST_H


#include "goods.h"


///////////////////класс TenantList////////////////////////
//класс TenantList — список всех жильцов.
//Он содержит множество указателей на класс Tenant
// и оперирует ими при выводе
class TenantList
{
private:
// установить указатели на жильцов
list <Tenant*> setPtrsTens; // указатели на класс жильцов
list <Tenant*>::iterator iter; //итератор
public:
~TenantList(); // деструктор (удаление жильцов)
void insertTenant(Tenant*); // добавить жильца в список
int getAptNo(string); // возвращает номер апартаментов
void display(); // вывод списка жильцов
};

#endif // GOODSLIST_H
