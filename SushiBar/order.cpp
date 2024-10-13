#include "order.h"
#include "landlord.h"

int Order::orderCounter = 0;

// Конструктор
Order::Order(const std::string& deliveryAddress)
    : orderId(++orderCounter), deliveryAddress(deliveryAddress), totalCost(0.0) {}

// Метод для добавления товара
void Order::addItem(goods* item) {
    items.push_back(item);  // Добавляем товар в список (указатель)
    totalCost += item->getPriceNumber();  // Добавляем цену товара к общей стоимости
}

// Метод для отображения информации о заказе
void Order::display() const {
    // Заголовок таблицы
    cout << "\nOrder ID: " << orderId << "\nDelivery Address: " << deliveryAddress << "\n";
    cout << "----------------------------------------------------------\n";
    cout << "Item Name\t\tSort\t\tPrice\n";
    cout << "----------------------------------------------------------\n";

    // Отображаем данные по каждому товару
    for (vector<goods*>::const_iterator it = items.begin(); it != items.end(); ++it) {
        cout << (*it)->getName() << "\t\t" // Имя товара
                  << (*it)->getSortName() << "\t\t" // Категория (Sort)
                  << (*it)->getPriceNumber() << "\n"; // Цена товара
    }

    // Подводим итоговую стоимость
    cout << "----------------------------------------------------------\n";
    cout << "Total Cost:\t\t\t\t" << totalCost << "\n";
}


// Метод для подсчета общей стоимости
double Order::calculateTotalCost() const {
    return totalCost;
}

// Геттер для orderId
int Order::getOrderId() const {
    return orderId;
}
