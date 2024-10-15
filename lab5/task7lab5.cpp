#include <iostream>
#include <string>
using namespace std;

const int MAX_MENU_ITEMS = 10;

class FoodItem {
private:
    string name;
    double price;

public:
    FoodItem(string foodName = "", double foodPrice = 0.0) : name(foodName), price(foodPrice) {}

    string getName() const {
        return name;
    }

    double getPrice() const {
        return price;
    }

    void setName(const string& foodName) {
        name = foodName;
    }

    void setPrice(double foodPrice) {
        price = foodPrice;
    }
};

class Menu {
private:
    FoodItem items[MAX_MENU_ITEMS];
    int itemCount;

public:
    Menu() : itemCount(0) {}

    void addItem(const FoodItem& item) {
        if (itemCount < MAX_MENU_ITEMS) {
            items[itemCount] = item;
            cout << "New dish added: " << item.getName() << " for just $" << item.getPrice() << "!" << endl;
            itemCount++;
        } else {
            cout << "The menu is full! Can't add more delectable items." << endl;
        }
    }

    void removeItem(const string& foodName) {
        for (int i = 0; i < itemCount; ++i) {
            if (items[i].getName() == foodName) {
                cout << "Successfully removed: " << items[i].getName() << endl;
                for (int j = i; j < itemCount - 1; ++j) {
                    items[j] = items[j + 1];
                }
                itemCount--;
                return;
            }
        }
        cout << "Sorry! Item not found: " << foodName << endl;
    }

    void displayMenu() const {
        cout << "Welcome to our Gourmet Restaurant! Here’s the Menu:" << endl;
        for (int i = 0; i < itemCount; ++i) {
            cout << items[i].getName() << " - $" << items[i].getPrice() << endl;
        }
    }

    FoodItem* getItems() {
        return items;
    }

    int getItemCount() const {
        return itemCount;
    }
};

class Payment {
private:
    double totalAmount;

public:
    Payment(double amount) : totalAmount(amount) {}

    double getAmount() const {
        return totalAmount;
    }
};

class Order {
private:
    FoodItem orderedItems[MAX_MENU_ITEMS];
    int itemCount;
    Payment payment;

public:
    Order(const FoodItem* items, int count, const Payment& pay)
        : itemCount(count), payment(pay) {
        for (int i = 0; i < count; ++i) {
            orderedItems[i] = items[i];
        }
    }

    void displayOrder() const {
        cout << "Your Order Summary:" << endl;
        for (int i = 0; i < itemCount; ++i) {
            cout << orderedItems[i].getName() << " - $" << orderedItems[i].getPrice() << endl;
        }
        cout << "Total Amount Due: $" << payment.getAmount() << endl;
        cout << "We appreciate your order!" << endl;
    }
};

class RestaurantOrderingSystem {
private:
    Menu menu;

public:
    void setMenu(const Menu& m) {
        menu = m;
    }

    void placeOrder(const FoodItem* items, int count) {
        double total = 0;
        for (int i = 0; i < count; ++i) {
            total += items[i].getPrice();
        }
        Payment payment(total);
        Order order(items, count, payment);
        order.displayOrder();
    }

    void displayMenu() const {
        menu.displayMenu();
    }

    void manageMenu() {
        int choice;
        do {
            cout << "\nMenu Management Options:\n";
            cout << "1. Display Menu" << endl;
            cout << "2. Add Item" << endl;
            cout << "3. Remove Item" << endl;
            cout << "0. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            if (choice == 1) {
                displayMenu();
            } else if (choice == 2) {
                string itemName;
                double itemPrice;
                cout << "Enter food name: ";
                cin >> itemName;
                cout << "Enter food price: ";
                cin >> itemPrice;
                FoodItem newItem(itemName, itemPrice);
                menu.addItem(newItem);
            } else if (choice == 3) {
                string itemName;
                cout << "Enter food name to remove: ";
                cin >> itemName;
                menu.removeItem(itemName);
            }
        } while (choice != 0);
    }
};

int main() {

    cout << "NAME: MAHNOOR HUSSAIN" << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;

    RestaurantOrderingSystem restaurant;

    FoodItem pasta("Pasta Primavera", 13.49);
    FoodItem curry("Chicken Curry", 15.99);
    FoodItem salad("Caesar Salad", 7.49);
    FoodItem steak("Pizza", 29.99);
    FoodItem iceCream("Chocolate Ice Cream", 4.99);

    Menu menu;
    menu.addItem(pasta);
    menu.addItem(curry);
    menu.addItem(salad);
    menu.addItem(steak);
    menu.addItem(iceCream);

    restaurant.setMenu(menu);
    restaurant.manageMenu();

    FoodItem orderItems[2] = { pasta, steak };
    restaurant.placeOrder(orderItems, 2);

}

