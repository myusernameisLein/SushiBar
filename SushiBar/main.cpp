// lordApp.cpp
#include "landlord.h"
int main()
{
//Функция setlocale() задаёт локализацию программы.
setlocale(LC_ALL, "rus");
UserInterface theUserInterface;
theUserInterface.interact();
return 0;
}
////////////////////конец файла lordApp.cpp///////////////
