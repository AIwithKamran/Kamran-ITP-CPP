// Switch Case
// Challenge: Write a program that lets the user select a tea type from a menu. Use a switch statement to display the price based on the selected tea.
// Green Tea: $2
// Black Tea: $3
// Oolong Tea: $4

#include <iostream>
using namespace std;

int main()
{
    int choice;
    double price;

    cout << "Please Select Tea from Below" << endl;
    cout << "1. Green Tea" << endl;
    cout << "2. Kashmiri Tea" << endl;
    cout << "3. Elachi Tea" << endl;
    
    cout<<"Please Select you Choice." << endl;
    cin >> choice;

    switch (choice)
    {

    case 1:
        price = 2.0;
        cout << "You've selected Green Tea. Price: " << price << endl; 
        break;
    case 2:
        price = 3.0;
        cout << "You've selected Kashmiri Tea. Price: " << price << endl;
        break;
    case 3:
        price = 3.0;
        cout << "You've selected Elachi Tea. Price: " << price << endl;
        break;
    default:
        cout << "Invalid Character. ";
        break;
    }

    return 0;
}