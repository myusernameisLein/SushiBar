#ifndef RENTINPUTSCREEN_H
#define RENTINPUTSCREEN_H
#include "landlord.h"
#include "rentinputscreen.h"
#include "rentrecord.h"
#include <tenantlist.h>


////////////////////класс RentInputScreen //////////////////
//Экран для добавления ренты
class RentInputScreen
{
private:
TenantList* ptrTenantList; // список жильцов
RentRecord* ptrRentRecord; // список записей об оплате
string renterName; // имя жильца, который платит ренту
float rentPaid; // рента
int month; // за месяц
int aptNo; // по апартаментам
public:
RentInputScreen(TenantList* ptrTL, RentRecord* ptrRR) : ptrTenantList(ptrTL),
ptrRentRecord(ptrRR)
{
/*тут пусто*/
}
void setRent(); // добавить арендную плату одного жильца за месяц
};

#endif // RENTINPUTSCREEN_H
