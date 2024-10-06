#include "userinterface.h"
#include <landlord.h>
#include <globalmethods.h>

UserInterface::UserInterface()
{
ptrgoodsList = new goodsList;
ptrIncomeList= new IncomeList;
ptrExpenseRecord = new ExpenseRecord;
}
//---------------------------------------------------------
UserInterface::~UserInterface()
{
delete ptrgoodsList;
delete ptrIncomeList;
delete ptrExpenseRecord;
}
//---------------------------------------------------------
void UserInterface::interact()
{
while (true)
{
cout << "Input information'i', \n"
<< "Output report 'd', \n"
<< " Quit 'q': \n";
ch = getaChar();
if (ch == 'i') // ввод данных
{
cout << " press to add food 't', \n"
<< " for food price 'r', \n"
<< " For expense 'e': \n";
ch = getaChar();
switch (ch)
{
//экраны ввода существуют только во время их
//использования
case 't': ptrgoodsInputScreen =
new goodsInputScreen(ptrgoodsList);
ptrgoodsInputScreen->setgoods();
delete ptrgoodsInputScreen;
break;
case 'r': ptrIncomeInputScreen =
new IncomeInputScreen(ptrgoodsList, ptrIncomeList);
ptrIncomeInputScreen->setIncome();
delete ptrIncomeInputScreen;
break;
case 'e': ptrExpenseInputScreen =
new ExpenseInputScreen(ptrExpenseRecord);
ptrExpenseInputScreen->setExpense();
delete ptrExpenseInputScreen;
break;
default: cout << "Unknown function\n";
break;
} // конец секции switch
} // конец условия if
else if (ch == 'd') // вывод данных
{
cout << "Press to output food type 't', \n"
<< " For price 'r' \n"
<< " For expense 'e', \n"
<< "For year report 'a': \n";
ch = getaChar();
switch (ch)
{
case 't': ptrgoodsList->display();
break;
case 'r': ptrIncomeList->display();
break;
case 'e': ptrExpenseRecord->display();
break;
case 'a':
ptrAnnualReport = new AnnualReport(ptrIncomeList,
ptrExpenseRecord);
ptrAnnualReport->display();
delete ptrAnnualReport;
break;
default: cout << "Unknown output function\n";
break;
} // конец switch
} // конец elseif
else if (ch == 'q')
return; // выход
else
cout << "Unknown function. Press this buttnos: 'i', 'd' or 'q'\n";
} // конец while
} // конец interact()
