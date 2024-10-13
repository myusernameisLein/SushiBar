#ifndef SPENDING_H
#define SPENDING_H

#include "globalmethods.h"

//Класс затрат
class Spending
{
    public:
        int month, day; // месяц и день уплаты расходов
        string category; // категория расходов (газ, свет, ремонт и тд)
        string payee; // кому платим (поставщики газа, света, сервисный центр...)
        float amount; // сколько платим
        Spending()
    { }
        Spending(int m, int d, string c, string p, float a) :
        month(m), day(d), category(c), payee(p), amount(a)
    {
        /* тут пусто! */
    }
};
#endif // SPENDING_H
