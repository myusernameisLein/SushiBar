#ifndef GOODSINPUTSCREEN_H
#define GOODSINPUTSCREEN_H


#include <goodslist.h>


////////////////класс TenantInputScreen////////////////////
//класс TenantInputScreen. Это класс, отвечающий за отображение «экрана»,
//куда пользователь может ввести данные о новом жильце:
class goodsInputScreen
{
    private:
    goodsList* ptrgoodsList;
    string tName;
    string Fsort;
    int aptNo;
    public:
    goodsInputScreen(goodsList* ptrGD) : ptrgoodsList(ptrGD)
    {
    /* тут пусто */
    }
    void setgoods(); // добавить данные о жильце
};

#endif // GOODSINPUTSCREEN_H
