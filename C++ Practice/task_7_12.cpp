// 5. Write a program in C++ which would swap the values of two variables without using the third variable.

#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;

    cout << "Before Swapping: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After Swapping: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}