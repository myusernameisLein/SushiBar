#ifndef GOODS_H
#define GOODS_H


#include <landlord.h>


//////////////////// класс goods (Товары) //////////////////
//Он хранит имя жильца и номер апартаментов, которые он арендует.
class goods
{
    private:
    string name; // Назавание товара
    string sort;
    int aptNumber; // номер апартаментов, в которых он живет
    // здесь может быть прочая информация о жильце
    // (телефон и т.п.)
    public:
   goods(string n, string s, int aNo);
    ~goods();
    int getAptNumber(); //возвращает номер комнаты жильца
    string getName(); //возвращает имя жильца
    string getSort(); //возвращает сорт еды
};
#endif // GOODS_H
