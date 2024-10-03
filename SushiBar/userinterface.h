#ifndef USERINTERFACE_H
#define USERINTERFACE_H


//Главный класс для запуска приложения:
//этот класс определяет взаимодействие юзера с программой.
class UserInterface
{
    private:
        TenantList* ptrTenantList;
        TenantInputScreen* ptrTenantInputScreen;
        RentRecord* ptrRentRecord;
        RentInputScreen* ptrRentInputScreen;
        ExpenseRecord* ptrExpenseRecord;
        ExpenseInputScreen* ptrExpenseInputScreen;
        AnnualReport* ptrAnnualReport;
    char ch;
    public:
        UserInterface();
        ~UserInterface();
    void interact();
}; // конец класса userInterfac
#endif // USERINTERFACE_H
