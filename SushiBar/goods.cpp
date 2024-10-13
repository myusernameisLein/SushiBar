#include "goods.h"

goods::goods(string n, string s, int aNo) : name(n), sort(s), aptNumber(aNo)
{
/* тут пусто */
}
//---------------------------------------------------------

goods::~goods() // деструктор
{
/* тут тоже пусто */
}

//---------------------------------------------------------
int goods::getAptNumber() //геттер возвращает номер комнаты жильца
{
return aptNumber;
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
