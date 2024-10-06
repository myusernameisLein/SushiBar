#ifndef TENANT_H
#define TENANT_H
#include <landlord.h>


//////////////////// класс Tenant (жильцы) //////////////////
//Он хранит имя жильца и номер апартаментов, которые он арендует.
class Tenant
{
private:
string name; // имя жильца
int aptNumber; // номер апартаментов, в которых он живет
// здесь может быть прочая информация о жильце
// (телефон и т.п.)
public:
Tenant(string n, int aNo);
~Tenant();
int getAptNumber(); //возвращает номер комнаты жильца
string getName(); //возвращает имя жильца
};
#endif
