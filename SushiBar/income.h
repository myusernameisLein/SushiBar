#ifndef INCOME_H
#define INCOME_H


#include "landlord.h"

////////////////////класс Income//////////////////////////
//класс, хранящий одну табличную строку доходов (уплаченной ренты)
// одна строка таблицы прибыли: адрес и 12 месячных оплат
class Income
{
private:
    int aptNo; // апартаменты, за которые уплачено
    string Sort;
    float income[12]; // месяцы
    public:
    Income(int, const string& sortName); // конструктор с одним параметром
    void setIncome(int, float); // добавить ренту за месяц
    //сумма платежей из одной строки (плата одного жильца за все месяцы)
    float getSumOfIncome();
    int getAptNo(); //Запрос номера апартаментов
    float getIncomeNo(int); //Запрос ренты за месяц int
    string getSortName();
};

#endif // Income_H
