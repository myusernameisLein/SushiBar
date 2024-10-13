#ifndef ORDERINPUTSCREEN_H
#define ORDERINPUTSCREEN_H

#include "orderlist.h" // Подключаем OrderList
#include "goodslist.h" // Подключаем GoodsList


class OrderInputScreen {
private:
    OrderList* ptrOrderList;
    goodsList* ptrgoodsList; // Указатель на список товаров

public:
    OrderInputScreen(OrderList* orderList, goodsList* goodsList);
    void inputOrder(); // Ввод нового заказа
};


#endif // ORDERINPUTSCREEN_H
