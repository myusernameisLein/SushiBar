#ifndef GOODS_H
#define GOODS_H

#include "globalmethods.h"

//////////////////// класс goods (Товары) //////////////////
//Он хранит имя товара и его вид.
class goods
{
    private:
    string name; // Название товара
    string sort;
    int PriceNumber; // Номер цены
    public:
   goods(string n, string s, int pNo);
    ~goods();
    int getPriceNumber(); //возвращает цену товара
    string getName(); //возвращает имя товара
    string getSort(); //возвращает сорт еды
    string getSortName();
};
#endif // GOODS_H
