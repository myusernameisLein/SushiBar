#ifndef GOODS_H
#define GOODS_H


#include <landlord.h>


//////////////////// класс goods (Товары) //////////////////
//Он хранит имя жильца и номер апартаментов, которые он арендует.
class goods
{
    private:
    string name; // Назавание товара
    string aptNumber; // номер апартаментов, в которых он живет
    // здесь может быть прочая информация о жильце
    // (телефон и т.п.)
    public:
   goods(string n, string aNo);
    ~goods();
    string getAptNumber(); //возвращает номер комнаты жильца
    string getName(); //возвращает имя жильца
};
#endif // GOODS_H
