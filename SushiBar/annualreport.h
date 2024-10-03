#ifndef ANNUALREPORT_H
#define ANNUALREPORT_H


//Класс годового отчета
class AnnualReport
{
private:
    RentRecord* ptrRR; // записи доходов
    ExpenseRecord* ptrER; // записи расходов
    float expenses, rents; // суммы доходов и расходов
    public:
    AnnualReport(RentRecord*, ExpenseRecord*);
    void display(); // отображение годового отчета
};

#endif // ANNUALREPORT_H
