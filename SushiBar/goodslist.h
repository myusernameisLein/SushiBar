#ifndef GOODSLIST_H
#define GOODSLIST_H


#include "goods.h"


///////////////////класс TenantList////////////////////////
//класс TenantList — список всех жильцов.
//Он содержит множество указателей на класс Tenant
// и оперирует ими при выводе
class goodsList
{
    private:
    // установить указатели на жильцов
    list <goods*> setPtrsgoods; // указатели на класс жильцов
    list <goods*>::iterator iter; //итератор
    public:
    ~goodsList(); // деструктор (удаление жильцов)
    void insertgoods(goods*); // добавить жильца в список
    int getAptNo(string); // возвращает номер апартаментов
    void display(); // вывод списка жильцов
    string getSortName(string);
};

#endif // GOODSLIST_H
