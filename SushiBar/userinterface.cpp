#include "userinterface.h"

userinterface::userinterface()
{

}

UserInterface::UserInterface()
{
ptrTenantList = new TenantList;
ptrRentRecord = new RentRecord;
ptrExpenseRecord = new ExpenseRecord;
}
//---------------------------------------------------------
UserInterface::~UserInterface()
{
delete ptrTenantList;
delete ptrRentRecord;
delete ptrExpenseRecord;
}
//---------------------------------------------------------
void UserInterface::interact()
{
while (true)
{
cout << "Для ввода данных нажмите 'i', \n"
<< " для вывода отчета 'd', \n"
<< " для выхода 'q': \n";
ch = getaChar();
if (ch == 'i') // ввод данных
{
cout << " нажмите для добавления жильца 't', \n"
<< " для записи арендной платы 'r', \n"
<< " для записи расходов 'e': \n";
ch = getaChar();
switch (ch)
{
//экраны ввода существуют только во время их
//использования
case 't': ptrTenantInputScreen =
new TenantInputScreen(ptrTenantList);
ptrTenantInputScreen->setTenant();
delete ptrTenantInputScreen;
break;
case 'r': ptrRentInputScreen =
new RentInputScreen(ptrTenantList, ptrRentRecord);
ptrRentInputScreen->setRent();
delete ptrRentInputScreen;
break;
case 'e': ptrExpenseInputScreen =
new ExpenseInputScreen(ptrExpenseRecord);
ptrExpenseInputScreen->setExpense();
delete ptrExpenseInputScreen;
break;
default: cout << "Неизвестная функция\n";
break;
} // конец секции switch
} // конец условия if
else if (ch == 'd') // вывод данных
{
cout << "Нажмите для вывода жильцов 't', \n"
<< " для вывода арендной платы 'r' \n"
<< " для вывода расходов 'e', \n"
<< "для вывода годового отчета 'a': \n";
ch = getaChar();
switch (ch)
{
case 't': ptrTenantList->display();
break;
case 'r': ptrRentRecord->display();
break;
case 'e': ptrExpenseRecord->display();
break;
case 'a':
ptrAnnualReport = new AnnualReport(ptrRentRecord,
ptrExpenseRecord);
ptrAnnualReport->display();
delete ptrAnnualReport;
break;
default: cout << "Неизвестная функция вывода\n";
break;
} // конец switch
} // конец elseif
else if (ch == 'q')
return; // выход
else
cout << "Неизвестная функция. Нажимайте только 'i', 'd' или 'q'\n";
} // конец while
} // конец interact()
