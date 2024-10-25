// // Nested If Else.
// // Challenge: A tea shop offers discounts based on the number of tea cups ordered. Write a program that checks the number of cups ordered and applies a discount:* More than 20 cups: 20% discount
// Between 10 and 20 cups: 10% discount
// Less than 10 cups: No discount

#include <iostream>
using namespace std;

int main()
{
    int cupPurchased;
    cout << "Please Enter the number of tea cups you have purchased.";
    cin >> cupPurchased;

    if (cupPurchased > 20)
    {
        cout << "You've got the 20% discount.";
    }
    else if (cupPurchased >= 10 && cupPurchased <= 20)
    {
        cout << "You've got 10% discount.";
    }
    else
    {
        cout << "Soory! but it this time you arrn't eligbale for this discount.";
    }

    return 0;
}