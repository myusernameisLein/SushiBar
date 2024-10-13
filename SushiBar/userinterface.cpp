#include "userinterface.h"
#include <landlord.h>
#include <globalmethods.h>

UserInterface::UserInterface()
{
ptrgoodsList = new goodsList;
ptrIncomeList= new IncomeList;
ptrSpendingList = new SpendingList;
ptrOrderList = new OrderList;

}
//---------------------------------------------------------
UserInterface::~UserInterface()
{
delete ptrgoodsList;
delete ptrIncomeList;
delete ptrSpendingList;
delete ptrOrderList;
}
//---------------------------------------------------------
void UserInterface::interact()
{
while (true)
{
cout << "Input information'i', \n"
<< "Output report 'd', \n"
<< "Quit 'q': \n";
ch = getaChar();
if (ch == 'i') // ввод данных
{
cout << "press to add food 't', \n"
<< " for income 'r', \n"
<< " For Spending 'e': \n"
<< " For Orders 'o': \n";
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
case 'e': ptrSpendingInputScreen =
                    new SpendingInputScreen(ptrSpendingList);
                    ptrSpendingInputScreen->setSpending();
                    delete ptrSpendingInputScreen;
break;
case 'o':  // Ввод заказов
                    ptrOrderInputScreen = new OrderInputScreen(ptrOrderList, ptrgoodsList);
                    ptrOrderInputScreen->inputOrder();
                    delete ptrOrderInputScreen;
                    break;
default: cout << "Unknown function\n";
break;
} // конец секции switch
} // конец условия if
else if (ch == 'd') // вывод данных
{
cout << "Press to output food type 't', \n"
<< " For price 'r' \n"
<< " For Spending 'e', \n"
<< " For Orders 'o', \n"
<< "For year report 'a': \n";
ch = getaChar();
switch (ch)
{
case 't':
                   ptrgoodsList->display();
                   break;
case 'r':
                   ptrIncomeList->display();
                   break;
case 'e':
                   ptrSpendingList->display();
                   break;
case 'o':
                   ptrOrderList->display();
                   break;
case 'a':
ptrAnnualReport = new AnnualReport(ptrIncomeList,
ptrSpendingList);
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
