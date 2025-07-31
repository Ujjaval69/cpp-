#include <iostream>
using namespace std;

class Calculator {
public:
    // Two integers: returns sum
    int process(int a, int b) {
        cout << "process(int, int) called: ";
        return a + b;
    }
    // Two pointers to integers: returns sum of pointed values
    int process(int* a, int* b) {
        cout << "process(int*, int*) called: ";
        return *a + *b;
    }
    // Integer by reference: doubles value
    int process(int& a) {
        cout << "process(int&) called: ";
        a *= 2;
        return a;
    }
    // Integer by value and one by pointer: returns product
    int process(int a, int* b) {
        cout << "process(int, int*) called: ";
        return a * (*b);
    }
};

int main() {
    Calculator calc;
    int x = 5, y = 7, z = 3;

    // Two integers
    cout << calc.process(x, y) << endl;           // Should print 12
    // Two pointers to int
    cout << calc.process(&x, &y) << endl;         // Should print 12
    // By reference (will double x)
    cout << calc.process(x) << endl;              // Should print 10 (x doubled to 10)
    // By value and by pointer
    cout << calc.process(z, &x) << endl;          // Should print 30 (3*10)
    return 0;
}
