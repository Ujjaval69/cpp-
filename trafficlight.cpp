#include <iostream>
using namespace std;

int main() {
    char currentLight;
    int remainingTime;

    // Input section
    cout << "Enter current light (R/G/Y): ";
    cin >> currentLight;
    cout << "Enter remaining time: ";
    cin >> remainingTime;

    // Convert character to uppercase (in case user enters lowercase)
    currentLight = toupper(currentLight);

    // Display current light
    if (currentLight == 'R') {
        cout << "Current: RED light" << endl;
    } else if (currentLight == 'G') {
        cout << "Current: GREEN light" << endl;
    } else if (currentLight == 'Y') {
        cout << "Current: YELLOW light" << endl;
    } else {
        cout << "Invalid light input!" << endl;
        return 1;
    }

    // Countdown using a for loop
    cout << "Countdown: ";
    for (int i = remainingTime; i >= 0; i--) {
        cout << i << " ";
    }
    cout << endl;

    // Determine and display the next light
    if (currentLight == 'R') {
        cout << "GREEN light activated for 45 seconds" << endl;
        cout << "Next: YELLOW light will activate after 45 seconds" << endl;
    } else if (currentLight == 'G') {
        cout << "YELLOW light activated for 5 seconds" << endl;
        cout << "Next: RED light will activate after 5 seconds" << endl;
    } else if (currentLight == 'Y') {
        cout << "RED light activated for 30 seconds" << endl;
        cout << "Next: GREEN light will activate after 30 seconds" << endl;
    }

    return 0;
}
