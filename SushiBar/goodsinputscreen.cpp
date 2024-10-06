#include "goodsinputscreen.h"

#include <globalmethods.h>

///////////метод класса TenantInputScreen//////////////////
void TenantInputScreen::setTenant() // добавить данные о жильце
{
cout << "Введите имя жильца (Дядя Федор): " << endl;
getaLine(tName);
cout << "Введите номер комнаты (101): " << endl;
cin >> aptNo;
cin.ignore(80, '\n');
Tenant* ptrTenant = new Tenant(tName, aptNo); // создать жильца
ptrTenantList->insertTenant(ptrTenant); // занести в список жильцов
}
//---------------------------------------------------------
