// If Statement is here..
// => We are going to understand it by taksh which is more easy to understand and capable.

// Challenge: Write a program that checks if the user wants to order Green Tea. If the user types "Green Tea," the program should confirm their order.

#include <iostream>
#include <string>

using namespace std;

int main() {
    string teaOrder;
    cout << "If you to order \"Green Tea\". the Type it carefully." << endl;

    getline(cin, teaOrder);
    if (teaOrder == "Green Tea"){
        cout<<"Thanks! You order is being confirmed. Wait for some Time Please.." << endl;
    }

    return 0;
}