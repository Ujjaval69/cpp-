#include <iostream>
using namespace std;

// Call by value: won't change original variable
void doubleValue(int x) {
    x *= 2;
    cout << "Inside doubleValue (by value): " << x << endl;
}

// Call by reference: will change original variable
void doubleReference(int &x) {
    x *= 2;
    cout << "Inside doubleReference (by reference): " << x << endl;
}

int main() {
    int a = 5, b = 5;
    doubleValue(a);
    cout << "After calling doubleValue, a: " << a << endl;
    doubleReference(b);
    cout << "After calling doubleReference, b: " << b << endl;
    return 0;
}
