// lordApp.cpp
#include "globalmethods.h"
#include "userinterface.h"


int main()
{

    setlocale(LC_ALL, "rus");
    UserInterface theUserInterface;
    theUserInterface.interact();

    system("pause");
    return 0;
}

