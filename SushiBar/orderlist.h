#ifndef ORDERLIST_H
#define ORDERLIST_H

#include "landlord.h"
#include "order.h" // Подключаем Order

class OrderList {
private:
    list<Order*> orders; // Список заказов

public:
    ~OrderList(); // Деструктор
    void addOrder(Order* order); // Метод для добавления заказа
    void display(); // Метод для отображения всех заказов
};

#endif // ORDERLIST_H
