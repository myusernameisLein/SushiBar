#include "spendinglist.h"
SpendingList::~SpendingList() // деструктор
{ // удалить объекты Spending
// удалить указатели на вектор
while (!vectPtrsSpendings.empty())
{
iter = vectPtrsSpendings.begin();
delete *iter;
vectPtrsSpendings.erase(iter);
}
}
//--------------------------------------------------------
void SpendingList::insertSpend(Spending* ptrSpend)
{
vectPtrsSpendings.push_back(ptrSpend);
}
//---------------------------------------------------------
void SpendingList::display() // распечатываем все расходы
{
cout << "\nDate\tRecipient\tAmount\tCategory\n"
<< "----------------------------------------\n" << endl;
if (vectPtrsSpendings.size() == 0) // В контейнере нет расходов
cout << "***No spendings***\n" << endl;
else
{
iter = vectPtrsSpendings.begin();
while (iter != vectPtrsSpendings.end())
{ // распечатываем все расходы
 cout << (*iter)->month << '/' << (*iter)->day << '\t' << (*iter)->payee << '\t' << '\t';
 cout << (*iter)->amount << '\t' << (*iter)->category << endl;
 iter++;
}
cout << endl;
}
}
//--------------------------------------------------------
// используется при составлении годового отчета
float SpendingList::displaySummary()
{
float totalSpendings = 0; // Сумма по всем категориям расходов
if (vectPtrsSpendings.size() == 0)
{
cout << "\tAll categories\t0\n";
return 0;
}
iter = vectPtrsSpendings.begin();
while (iter != vectPtrsSpendings.end())
{
//выводим на экран категории расходов
cout << '\t' << ((*iter)->category) << '\t' << ((*iter)->amount) << endl;
totalSpendings += (*iter)->amount; //подсчитываем все расходы
iter++;
}
return totalSpendings;
}
//--------------------------------------------------------
