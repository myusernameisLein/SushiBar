#include "goodsinputscreen.h"

#include <globalmethods.h>

///////////метод класса goodsInputScreen//////////////////
void goodsInputScreen::setgoods() // добавить данные о жильце
{
    cout << "Input type of food: " << endl;
    getaLine(tName);
    cout << "Input sort of food" << endl;
    getaLine(Fsort);
    cout << "Input price of food " << endl;
    cin >> aptNo;
    cin.ignore(80, '\n');
    goods* ptrgoods = new goods(tName, Fsort, aptNo); // создать жильца
    ptrgoodsList->insertgoods(ptrgoods); // занести в список жильцов
}
//---------------------------------------------------------
