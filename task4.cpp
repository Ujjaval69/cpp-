#include <iostream>
using namespace std;

// Function using pointer arithmetic to calculate sum
int sumByPointer(int* arr, int size) {
    int sum = 0;
    for(int* p = arr; p < arr + size; ++p) {
        sum += *p;
    }
    return sum;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;

    // Sum using index-based traversal
    for(int i = 0; i < 5; ++i) {
        sum += arr[i];
    }
    cout << "Sum using array indices: " << sum << endl;

    // Sum using pointer arithmetic (no index)
    sum = 0;
    int* ptr = arr;
    for(int i = 0; i < 5; ++i) {
        sum += *(ptr + i);
    }
    cout << "Sum using pointer arithmetic: " << sum << endl;

    // Sum using sumByPointer function
    cout << "Sum by passing array as pointer: " << sumByPointer(arr, 5) << endl;

    return 0;
}
