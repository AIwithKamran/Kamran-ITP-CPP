// Challenge 1: Arithmetic Operators
// Write a program that calculates the price of tea packs. A user enters the number of tea packs they want, and the price per pack. Apply a 10% tax to the total price and display the final cost.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int teaPacks, pricePerPack;
    cout << "Please enter Tea Packs Quantity. 0" << endl;
    cin >> teaPacks;

    cout << "Enter Price Per Pack of Tea. " << endl;
    cin >> pricePerPack;

    // Lets do the operation Now...

    int teaSum = teaPacks * pricePerPack;
    int teaTotal = teaSum / 10 + teaSum;

    // Display Output..
    cout << "The total price of the tea Packs is. "<< teaTotal << endl;

    return 0;
}

// Calucations is here..
// 5 * 45 = 225 now lets add the 10 percent 225/10=(22.5) + 225 =  247.5  you can check any example.

