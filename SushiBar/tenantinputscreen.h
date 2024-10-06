#ifndef TENANTINPUTSCREEN_H
#define TENANTINPUTSCREEN_H
#include <tenantlist.h>


////////////////класс TenantInputScreen////////////////////
//класс TenantInputScreen. Это класс, отвечающий за отображение «экрана»,
//куда пользователь может ввести данные о новом жильце:
class TenantInputScreen
{
private:
TenantList* ptrTenantList;
string tName;
int aptNo;
public:
TenantInputScreen(TenantList* ptrTL) : ptrTenantList(ptrTL)
{
/* тут пусто */
}
void setTenant(); // добавить данные о жильце
};
#endif // TENANTINPUTSCREEN_H
