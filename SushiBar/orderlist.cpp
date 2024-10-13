#include "orderlist.h"
#include "landlord.h"

// Деструктор
OrderList::~OrderList() {
    // Освобождаем память, удаляя все объекты Order
    for (std::list<Order*>::iterator it = orders.begin(); it != orders.end(); ++it) {
        delete *it; // Удаляем каждый объект заказа
    }
}

// Метод для добавления заказа
void OrderList::addOrder(Order* order) {
    orders.push_back(order); // Добавляем заказ в список
}

// Метод для отображения всех заказов
void OrderList::display() {
    // Отображаем информацию о каждом заказе
    for (list<Order*>::iterator it = orders.begin(); it != orders.end(); ++it) {
        (*it)->display(); // Вызов метода display() для каждого заказа
    }
}
