// Challenge 4: Bitwise Operators
// Write a program that uses bitwise AND (&) to check which tea types are in stock. The stock is encoded in an integer (1 for Green, 2 for Black, 4 for Oolong). Allow the user to check availability by inputting the tea type (1, 2, or 4), and display a message saying whether that tea is in stock or not.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int stock = 1 | 2 | 3;
    int teaNumber;
    cout << "Please enter which one the  you want green = 1, black = 2, Oolang = 4 ";
    cin >> teaNumber;
    if (teaNumber & stock)
    {
        cout << "Good! Always be on time. This is a great chance for you.";
    }
    else
    {
        cout << "We apoligize for the unconveinces you cause.";
    }
    return 0;
}