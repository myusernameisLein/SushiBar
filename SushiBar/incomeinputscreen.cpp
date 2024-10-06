#include "incomeinputscreen.h"
#include <globalmethods.h>

/////////////////методы класса IncomeInputScreen/////////////
void IncomeInputScreen::setIncome()
{
    cout << "Input food name: ";
    getaLine(IncomeName);
    // получить номер апартаментов по имени жильца
//    aptNo = ptrgoodsList->getAptNo(IncomeName);
//    if (aptNo != "") // если имя найдено, и такой жилец существует -
//    { // получить сумму платежа
//    cout << "Input food price (345.67): " << endl;
//    cin >> IncomePaid; // вводим ренту
//    cin.ignore(80, '\n');
//    cout << "Idk(was month): " << endl;
//    cin >> month;
//    cin.ignore(80, '\n');
//    month--; // (внутренняя нумерация 0-11)
//     // вставляем ренту в запись об оплате
//    ptrIncomeList->insertIncomeList(aptNo, month, IncomePaid);
}
//else
//cout << "Такого жильца нет.\n" << endl;
//}
//---------------------------------------------------------
