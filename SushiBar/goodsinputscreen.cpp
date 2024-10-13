#include "goodsinputscreen.h"

#include <globalmethods.h>

///////////метод класса goodsInputScreen//////////////////
void goodsInputScreen::setgoods() // добавить данные о жильце
{
    cout << "Enter type of food: " << endl;
    getaLine(tName);
    cout << "Enter sort of food" << endl;
    getaLine(Fsort);
    cout << "Enter price of food " << endl;
    cin >> Fprice;
    cin.ignore(80, '\n');
    goods* ptrgoods = new goods(tName, Fsort, Fprice); // создать жильца
    ptrgoodsList->insertgoods(ptrgoods); // занести в список жильцов
}
//---------------------------------------------------------
