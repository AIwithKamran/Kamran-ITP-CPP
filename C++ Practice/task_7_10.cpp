#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a four-digit number: ";
    cin >> num;

    cout << num / 1000 << endl;
    cout << (num % 1000) / 100 << endl;
    cout << (num % 100) / 10 << endl;
    cout << num % 10 << endl;

    return 0;
}
