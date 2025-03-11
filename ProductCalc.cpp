#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int productNum, quantity;
    double totalSales = 0.0;

    cout << "Enter product number (1-5) and quantity sold (Enter 0 to find sum):" << endl;

    while (true) {
        cout << "Product Number: ";
        cin >> productNum;

        if (productNum == 0) {
            break;
        }

        cout << "Quantity Sold: ";
        cin >> quantity;

        double price = 0.0;

        switch (productNum) {
            case 1: price = 2.98; break;
            case 2: price = 4.50; break;
            case 3: price = 9.98; break;
            case 4: price = 4.49; break;
            case 5: price = 6.87; break;
            default: 
                cout << "Invalid product number. Please enter a valid product (1-5)." << endl;
                continue;
        }

        totalSales += price * quantity;
    }

    cout << fixed << setprecision(2);
    cout << "Total of all products sold: $" << totalSales << endl;

    return 0;
}
