#ifndef INCOMELIST_H
#define INCOMELIST_H

#include "landlord.h"


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

#endif // INCOMELIST_H
