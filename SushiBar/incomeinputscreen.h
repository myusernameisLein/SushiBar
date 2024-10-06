#ifndef INCOMEINPUTSCREEN_H
#define INCOMEINPUTSCREEN_H

#include "landlord.h"
#include "income.h"
#include "incomeinputscreen.h"
#include <goodslist.h>


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


#endif // INCOMEINPUTSCREEN_H
