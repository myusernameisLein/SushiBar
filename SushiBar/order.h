#ifndef ORDER_H
#define ORDER_H

#include "landlord.h"
#include "goods.h" // Подключаем goods.h для использования объекта goods


class Order {
private:
    int orderId;
    string deliveryAddress;
    vector<goods*> items;  // Теперь храним указатели на товары
    double totalCost;
    static int orderCounter;

public:
    Order(const string& deliveryAddress);
    void addItem(goods* item);  // Добавляем указатель на товар
    void display() const;
    double calculateTotalCost() const;
    int getOrderId() const;
};

#endif // ORDER_H
