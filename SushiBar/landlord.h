//landlord.h
//заголовочный файл содержит объявления классов и т.п.
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //для accumulate()
using namespace std;
//////////////////// глобальные методы //////////////////////
void getaLine(string& inStr); // получение строки текста
char getaChar(); // получение символа
//////////////////// класс Tenant (жильцы) //////////////////
//Он хранит имя жильца и номер апартаментов, которые он арендует.
class Tenant
{
private:
string name; // имя жильца
int aptNumber; // номер апартаментов, в которых он живет
// здесь может быть прочая информация о жильце
// (телефон и т.п.)
public:
Tenant(string n, int aNo);
~Tenant();
int getAptNumber(); //возвращает номер комнаты жильца
string getName(); //возвращает имя жильца
};
///////////////////класс TenantList////////////////////////
//класс TenantList — список всех жильцов.
//Он содержит множество указателей на класс Tenant
// и оперирует ими при выводе
class TenantList
{
private:
// установить указатели на жильцов
list <Tenant*> setPtrsTens; // указатели на класс жильцов
list <Tenant*>::iterator iter; //итератор
public:
~TenantList(); // деструктор (удаление жильцов)
void insertTenant(Tenant*); // добавить жильца в список
int getAptNo(string); // возвращает номер апартаментов
void display(); // вывод списка жильцов
};
////////////////класс TenantInputScreen////////////////////
//класс TenantInputScreen. Это класс, отвечающий за отображение «экрана»,
//куда пользователь может ввести данные о новом жильце:
class TenantInputScreen
{
private:
TenantList* ptrTenantList;
string tName;
int aptNo;
public:
TenantInputScreen(TenantList* ptrTL) : ptrTenantList(ptrTL)
{
/* тут пусто */
}
void setTenant(); // добавить данные о жильце
};
////////////////////класс RentRow//////////////////////////
//класс, хранящий одну табличную строку доходов (уплаченной ренты)
// одна строка таблицы прибыли: адрес и 12 месячных оплат
class RentRow
{
private:
int aptNo; // апартаменты, за которые уплачено
float rent[12]; // месяцы
public:
RentRow(int); // конструктор с одним параметром
void setRent(int, float); // добавить ренту за месяц
//сумма платежей из одной строки (плата одного жильца за все месяцы)
float getSumOfRow();
int getAptNo(); //Запрос номера апартаментов
float getRentNo(int); //Запрос ренты за месяц int
};
//////////////////// класс RentRecord ///////////////////////
//класс RentRecord. Он хранит непосредственно записи об арендной плате.
//С ним будет взаимодействовать экран добавления арендной платы.
class RentRecord
{
private:
list <RentRow*> setPtrsRR; // указатели на объекты rentRow (по одному на жильца)
list <RentRow*>::iterator iter;
public:
~RentRecord();
void insertRent(int, int, float); // добавить ренту
void display(); // отобразить все строки с рентами
float getSumOfRents(); // подсчитать сумму всех платежей всех жильцов
};
////////////////////класс RentInputScreen //////////////////
//Экран для добавления ренты
class RentInputScreen
{
private:
TenantList* ptrTenantList; // список жильцов
RentRecord* ptrRentRecord; // список записей об оплате
string renterName; // имя жильца, который платит ренту
float rentPaid; // рента
int month; // за месяц
int aptNo; // по апартаментам
public:
RentInputScreen(TenantList* ptrTL, RentRecord* ptrRR) : ptrTenantList(ptrTL),
ptrRentRecord(ptrRR)
{
/*тут пусто*/
}
void setRent(); // добавить арендную плату одного жильца за месяц
};
///////////////////////класс Expense///////////////////////

///////////////////класс ExpenseRecord/////////////////////

////////////////класс ExpenseInputScreen///////////////////
//Класс для ввода расходов

//////////////////класс AnnualReport///////////////////////

//////////////////Класс UserInterface//////////////////////

//////////////////конец файла landlord.h///////////////////
