#include <iostream>
using namespace std;

// Function to find the pointer to the largest value
int* findLargest(int* x, int* y, int* z) {
    if (*x > *y && *x > *z) return x;
    else if (*y > *x && *y > *z) return y;
    else return z;
}

int main() {
    int a = 10, b = 20, c = 30;
    int *pa = &a, *pb = &b, *pc = &c;

    // Print original values and addresses
    cout << "Original addresses and values:\n";
    cout << "a: " << pa << " value: " << *pa << endl;
    cout << "b: " << pb << " value: " << *pb << endl;
    cout << "c: " << pc << " value: " << *pc << endl;

    // Swap values using pointers only
    int temp = *pa;
    *pa = *pb;
    *pb = *pc;
    *pc = temp;

    cout << "\nAfter swapping (using pointers):\n";
    cout << "a: " << pa << " value: " << *pa << endl;
    cout << "b: " << pb << " value: " << *pb << endl;
    cout << "c: " << pc << " value: " << *pc << endl;

    // Find and modify the largest value
    int* largest = findLargest(pa, pb, pc);
    *largest = 100;

    cout << "\nAfter modifying largest to 100:\n";
    cout << "a: " << pa << " value: " << *pa << endl;
    cout << "b: " << pb << " value: " << *pb << endl;
    cout << "c: " << pc << " value: " << *pc << endl;

    return 0;
}
