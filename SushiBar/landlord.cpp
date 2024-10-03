//Файл landlord.cpp содержит все определения методов
#include <iostream>
#include "landlord.h"
void getaLine(string& inStr) // получение строки текста
{
char temp[21];
cin.get(temp, 20, '\n');
cin.ignore(20, '\n'); //число пропускаемых символов и символ разделения
inStr = temp;
}
//---------------------------------------------------------
char getaChar() // получение символа
{
char ch = cin.get();
cin.ignore(80, '\n'); //число пропускаемых символов и символ разделения
return ch;
}
//---------------------------------------------------------
////////////////методы класса Tenant///////////////////////
//в конструкторе задаём имя жильца и номер комнаты
Tenant::Tenant(string n, int aNo) : name(n), aptNumber(aNo)
{
/* тут пусто */
}
//---------------------------------------------------------
Tenant::~Tenant() // деструктор
{
/* тут тоже пусто */
}
//---------------------------------------------------------
int Tenant::getAptNumber() //геттер возвращает номер комнаты жильца
{
return aptNumber;
}
//--------------------------------------------------------
string Tenant::getName() //геттер возвращает имя жильца
{
return name;
}
//---------------------------------------------------------
///////////метод класса TenantInputScreen//////////////////
void TenantInputScreen::setTenant() // добавить данные о жильце
{
cout << "Введите имя жильца (Дядя Федор): " << endl;
getaLine(tName);
cout << "Введите номер комнаты (101): " << endl;
cin >> aptNo;
cin.ignore(80, '\n');
Tenant* ptrTenant = new Tenant(tName, aptNo); // создать жильца
ptrTenantList->insertTenant(ptrTenant); // занести в список жильцов
}
//---------------------------------------------------------
////////////////методы класса TenantList///////////////////
TenantList::~TenantList() // деструктор
{
while (!setPtrsTens.empty()) // удаление всех жильцов,
{ // удаление указателей из контейнера
iter = setPtrsTens.begin();
delete *iter;
setPtrsTens.erase(iter);
}
}
//---------------------------------------------------------
void TenantList::insertTenant(Tenant* ptrT)
{
setPtrsTens.push_back(ptrT); // вставка нового жильца в список
}
//---------------------------------------------------------
int TenantList::getAptNo(string tName) // получить номер апартаментов по имени жильца
{
int aptNo;
iter = setPtrsTens.begin();
while (iter != setPtrsTens.end())
{ // поиск жильца в списке (достаем у каждого жильца номер апартаментов)
aptNo = (*iter)->getAptNumber();
if (tName == ((*iter)->getName())) // сравниваем по именам и
{
// если получившаяся пара совпадает - значит,
//мы нашли запись об этом жильце в списке, в этом случае
return aptNo; // возвращаем номер его апартаментов
}
iter++;
}
return -1; // если нет - возвращаем -1
}
//--------------------------------------------------------

void TenantList::display() // вывод списка жильцов
{
cout << "\nApt#\tИмя жильца\n-------------------\n";
if (setPtrsTens.empty()) // если список жильцов пуст
cout << "***Нет жильцов***\n" << endl; // выводим запись, что он пуст)
else
{
iter = setPtrsTens.begin();
while (iter != setPtrsTens.end()) // распечатываем всех жильцов
{
cout << (*iter)->getAptNumber() << " || " << (*iter)->getName() << endl;
*iter++;
}
}
}
//---------------------------------------------------------
/////////////////методы класса rentRow/////////////////////
RentRow::RentRow(int an) : aptNo(an) //конструктор
{ //Алгоритм fill() помещает копию значения value (у нас это 0)
//в каждый элемент диапазона, ограниченного парой итераторов [first,last).
//Т.е. в конструкторе просто инициализируем массив значениями 0.
fill(&rent[0], &rent[12], 0);
}
//---------------------------------------------------------
void RentRow::setRent(int m, float am) // сеттер оплата за месяц m, сумма - am
{
rent[m] = am; // привязываем оплату к месяцу
}
//---------------------------------------------------------
int RentRow::getAptNo() // геттер запрос номера апартаментов
{
return aptNo;
}
//---------------------------------------------------------
float RentRow::getRentNo(int month) //Геттер запрос ренты за месяц month
{
return rent[month];
}
//---------------------------------------------------------
float RentRow::getSumOfRow() // cумма арендных платежей в строке
{ //По умолчанию алгоритм accumulate() суммирует элементы.
 //Нужно указать точку старта, конечную точку и значение от которого начинаем прибавлять.
 //Чаще всего это ноль, но может быть и результат других вычислений.
return accumulate(&rent[0], &rent[12], 0);
}
//---------------------------------------------------------
/////////////////методы класса rentRecord//////////////////
RentRecord::~RentRecord() // деструктор
{ // удалить строки с платежами,
// удалить указатели из множества.
while (!setPtrsRR.empty())
{
iter = setPtrsRR.begin();
delete *iter;
setPtrsRR.erase(iter);
}
}
//---------------------------------------------------------
void RentRecord::insertRent(int aptNo, int month, float amount)
{
iter = setPtrsRR.begin(); // Инициализация итератора
while (iter != setPtrsRR.end()) // условие выхода
{ // если текущий объект совпадает с созданным для поиска,
if (aptNo == (*iter)->getAptNo())
{ // заносим ренту в список
(*iter)->setRent(month, amount);
return;
}
else
iter++;
} // если не нашли строку - создаем новую
RentRow* ptrRow = new RentRow(aptNo);
ptrRow->setRent(month, amount); // заносим в нее платеж
setPtrsRR.push_back(ptrRow); // заносим строку в вектор
}
//---------------------------------------------------------
void RentRecord::display() // отобразить все строки с рентами
{
cout << "\nAptNo\tЯнв Фев Мар Апр Май Июн Июл Авг Сен Окт Ноя Дек\n" << endl
<< "------------------------------------------------------------------\n" << endl;
if (setPtrsRR.empty())
cout << "***Нет платежей!***\n" << endl;
else
{
iter = setPtrsRR.begin(); //итератор на список с указателями на объекты rentRow
while (iter != setPtrsRR.end())
{
cout << (*iter)->getAptNo() << '\t'; // вывести номер комнаты
for (int j = 0; j < 12; j++) // вывести 12 арендных платежей
{
if (((*iter)->getRentNo(j)) == 0)
cout << " 0 ";
else
cout << (*iter)->getRentNo(j) << " ";
}
cout << endl;
iter++;
}
cout << endl;
cout << endl;
}
}
//---------------------------------------------------------
float RentRecord::getSumOfRents() // сумма всех платежей
{
float sumRents = 0.0;
iter = setPtrsRR.begin();
while (iter != setPtrsRR.end())
{ // плюсуем суммы всех платежей жильцов за все время
sumRents += (*iter)->getSumOfRow();
iter++;
}
return sumRents;
}
//---------------------------------------------------------
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
//////////////////методы класса expenseRecord//////////////
ExpenseRecord::~ExpenseRecord() // деструктор
{ // удалить объекты expense
// удалить указатели на вектор
while (!vectPtrsExpenses.empty())
{
iter = vectPtrsExpenses.begin();
delete *iter;
vectPtrsExpenses.erase(iter);
}
}
//--------------------------------------------------------
void ExpenseRecord::insertExp(Expense* ptrExp)
{
vectPtrsExpenses.push_back(ptrExp);
}
//---------------------------------------------------------
void ExpenseRecord::display() // распечатываем все расходы
{
cout << "\nДата\tПолучатель\tСумма\tКатегория\n"
<< "----------------------------------------\n" << endl;
if (vectPtrsExpenses.size() == 0) // В контейнере нет расходов
cout << "***Расходов нет***\n" << endl;
else
{
iter = vectPtrsExpenses.begin();
while (iter != vectPtrsExpenses.end())
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
float ExpenseRecord::displaySummary()
{
float totalExpenses = 0; // Сумма по всем категориям расходов
if (vectPtrsExpenses.size() == 0)
{
cout << "\tВсе категории\t0\n";
return 0;
}
iter = vectPtrsExpenses.begin();
while (iter != vectPtrsExpenses.end())
{
//выводим на экран категории расходов
cout << '\t' << ((*iter)->category) << '\t' << ((*iter)->amount) << endl;
totalExpenses += (*iter)->amount; //подсчитываем все расходы
iter++;
}
return totalExpenses;
}
//--------------------------------------------------------
//////////////методы класса ExpenseInputScreen/////////////
// конструктор
ExpenseInputScreen::ExpenseInputScreen(ExpenseRecord* per) : ptrExpenseRecord(per)
{
/*пусто*/
}
//------------------------------------------------------
void ExpenseInputScreen::setExpense()
{
int month, day;
string category, payee;
float amount;
cout << "Введите месяц (1-12): ";
cin >> month;
cin.ignore(80, '\n');
cout << "Введите день (1-31): ";
cin >> day;
cin.ignore(80, '\n');
cout << "Введите категорию расходов (Ремонт, Налоги): ";
getaLine(category);
cout << "Введите получателя (ПростоквашиноЭлектроСбыт): ";
getaLine(payee);
cout << "Введите сумму (39.95): ";
cin >> amount;
cin.ignore(80, '\n');
// создаем новый расход
Expense* ptrExpense = new Expense(month, day, category, payee, amount);
// вставляем расход в список всех расходов
 ptrExpenseRecord->insertExp(ptrExpense);
}
//---------------------------------------------------------
////////////////методы класса AnnualReport/////////////////
//Конструктор
AnnualReport::AnnualReport(RentRecord* pRR, ExpenseRecord* pER) : ptrRR(pRR), ptrER(pER)
{ /* пусто */
}
//---------------------------------------------------------
void AnnualReport::display()
{
cout << "Годовой отчет\n--------------\n" << endl;
cout << "Доходы\n" << endl;
cout << "\tАрендная плата:\t\t";
rents = ptrRR->getSumOfRents();
cout << rents << endl;
cout << "Расходы\n" << endl;
expenses = ptrER->displaySummary();
cout << "Расходы всего:\t\t";
cout << expenses << endl;
// вычисляем прибыльность
cout << "\nБаланс:\t\t\t" << (rents - expenses) << endl;
}
//---------------------------------------------------------
////////////////методы класса userInterface//////////////

//////////////////конец файлаlandlord.cpp/////////////////
