#include "orderinputscreen.h"

OrderInputScreen::OrderInputScreen(OrderList* orderList, goodsList* goodsList)
    : ptrOrderList(orderList), ptrgoodsList(goodsList) {}

void OrderInputScreen::inputOrder() {
    string deliveryAddress;
    string foodSort;  // Имя категории для поиска

    cout << "Enter delivery address: ";
    getline(cin, deliveryAddress);  // Ввод адреса доставки

    Order* newOrder = new Order(deliveryAddress);  // Создаем новый заказ

    cout << "Enter items (categories) and their prices (type 'done' to finish): \n";
    while (true) {
        cout << "Food Category (Sort): ";
        getline(cin, foodSort);  // Вводим категорию товара
        if (foodSort == "done") {
            break;  // Завершаем ввод, если введено "done"
        }

        // Поиск товара по категории (sort)
        goods* selectedItem = NULL;
        for (list<goods*>::iterator it = ptrgoodsList->getgoodsList().begin(); it != ptrgoodsList->getgoodsList().end(); ++it) {
            if ((*it)->getSortName() == foodSort) {  // Сравниваем по категории (sort)
                selectedItem = *it;  // Нашли товар по категории
                break;
            }
        }

        if (selectedItem) {
            // Добавляем товар в заказ
            newOrder->addItem(selectedItem);  // Передаем указатель на товар
        } else {
            cout << "Category not found! Please enter a valid category.\n";
        }
    }

    // Добавляем заказ в список
    ptrOrderList->addOrder(newOrder);
}
