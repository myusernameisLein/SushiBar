#ifndef INCOME_H
#define INCOME_H


#include "landlord.h"
#include "incomelist.h"


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

#endif // INCOME_H
