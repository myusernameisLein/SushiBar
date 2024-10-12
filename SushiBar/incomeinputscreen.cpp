#include "incomeinputscreen.h"
#include <globalmethods.h>

/////////////////методы класса IncomeInputScreen/////////////
void IncomeInputScreen::setIncome()
{
    cout << "Enter sort name: ";
    getaLine(IncomeName);
    // получить номер апартаментов по имени жильца
    aptNo = ptrgoodsList->getAptNo(IncomeName);
    if (aptNo > 0) // если имя найдено, и такой жилец существует -
    { // получить сумму платежа
    cout << "Enter amount of food: " << endl;
    cin >> SumFood; // вводим ренту
    SumFood = SumFood * aptNo;
    cin.ignore(80, '\n');
    cout << "Month: " << endl;
    cin >> month;
    cin.ignore(80, '\n');
    SF = ptrgoodsList->getSortName(IncomeName);
    month--; // (внутренняя нумерация 0-11)
     // вставляем ренту в запись об оплате
    ptrIncomeList->insertIncomeList(aptNo, SF, month, SumFood);
}
else
cout << "There is no such kind of food.\n" << endl;
}
//---------------------------------------------------------
