#ifndef GOODSLIST_H
#define GOODSLIST_H

#include "goods.h"

///////////////////класс TenantList////////////////////////
//класс TenantList — список всех жильцов.
//Он содержит множество указателей на класс Tenant
// и оперирует ими при выводе
class goodsList
{
public:
    // установить указатели на товары
    list <goods*> setPtrsgoods; // указатели на класс товаров
    list <goods*>::iterator iter; //итератор
    ~goodsList(); // деструктор (удаление товаров)
    void insertgoods(goods*); // добавить товар в список
    int getFprice(string); // возвращает цену товара
    void display(); // вывод списка товаров
    string getSortName(string);
    std::list<goods*>& getgoodsList() {
            return setPtrsgoods;
        }
};

#endif // GOODSLIST_H
