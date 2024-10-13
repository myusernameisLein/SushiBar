#ifndef INCOME_H
#define INCOME_H

#include "globalmethods.h"

////////////////////класс Income//////////////////////////
//класс, хранящий одну табличную строку доходов (уплаченной ренты)
// одна строка таблицы прибыли: адрес и 12 месячных оплат
class Income
{
private:
    int Fprice; // цена товара
    string Sort;
    float income[12]; // месяцы
    public:
    Income(int, const string& sortName); // конструктор с одним параметром
    void setIncome(int, float); // добавить доход за месяц
    //сумма доходов с 1 вида товара
    float getSumOfIncome();
    int getFprice(); //Запрос цены товара
    float getIncomeNo(int); //Запрос доходов за месяц int
    string getSortName();
};

#endif // Income_H
