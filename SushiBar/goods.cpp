#include "goods.h"

goods::goods(string n, string s, int pNo) : name(n), sort(s), PriceNumber(pNo)
{
/* тут пусто */
}
//---------------------------------------------------------

goods::~goods() // деструктор
{
/* тут тоже пусто */
}

//---------------------------------------------------------
int goods::getPriceNumber() //геттер возвращает номер комнаты жильца
{
return PriceNumber;
}
//--------------------------------------------------------

string goods::getName() //геттер возвращает имя жильца
{
return name;
}
//---------------------------------------------------------

string goods::getSortName() //геттер возвращает имя жильца
{
return sort;
}
//---------------------------------------------------------
