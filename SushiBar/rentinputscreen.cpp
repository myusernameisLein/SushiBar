#include "rentinputscreen.h"
#include <globalmethods.h>

/////////////////методы класса rentInputScreen/////////////
void RentInputScreen::setRent()
{
cout << "Введите имя жильца: ";
getaLine(renterName);
// получить номер апартаментов по имени жильца
aptNo = ptrTenantList->getAptNo(renterName);
if (aptNo > 0) // если имя найдено, и такой жилец существует -
{ // получить сумму платежа
cout << "Введите сумму платежа (345.67): " << endl;
cin >> rentPaid; // вводим ренту
cin.ignore(80, '\n');
cout << "Введите номер месяца оплаты (1-12): " << endl;
cin >> month;
cin.ignore(80, '\n');
month--; // (внутренняя нумерация 0-11)
 // вставляем ренту в запись об оплате
ptrRentRecord->insertRent(aptNo, month, rentPaid);
}
else
cout << "Такого жильца нет.\n" << endl;
}
//---------------------------------------------------------
