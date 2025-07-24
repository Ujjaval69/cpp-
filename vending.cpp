#include <iostream>
using namespace std;
int main() {
    string items[4] = {"Chips", "Soda", "Candy", "Water"};
    float prices[4] = {2.5, 1.75, 1.25, 1.0};
    int choice;
    float money = 0.0, inserted = 0.0;
    cout << "===== VENDING MACHINE =====" << endl;
    for (int i = 0; i < 4; i++) {
        cout << i + 1 << ". " << items[i] << " - $" << prices[i] << endl;
    }
    cout << "Select an item (1-4): ";
    cin >> choice;
    if (choice < 1 || choice > 4) {
        cout << "Invalid choice!" << endl;
        return 0;
    }
    float cost = prices[choice - 1];
    cout << "You selected: " << items[choice - 1] << " ($" << cost << ")" << endl;
    while (inserted < cost) {
        cout << "Insert money: ";
        cin >> money;
        inserted += money;

        if (inserted < cost) {
            cout << "Not enough. You still need $" << cost - inserted << endl;
        }
    }
    cout << "Dispensing: " << items[choice - 1] << endl;
    if (inserted > cost) {
        float change = inserted - cost;
        cout << "Returning change: $" << change << endl;
    }
    cout << "Thank you for using the vending machine!" << endl;
    return 0;
}
