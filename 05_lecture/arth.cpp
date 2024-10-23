#include <iostream>
#include <string>
using namespace std;

int main()
{
    int books;
    double pricePerBook, totalPrice, DiscountPrice;
    cout << "Enter the number of Books. ";
    cin >> books;
    cout << "Enter the price Perice Per book. ";
    cin >> pricePerBook;

    //Total
    totalPrice = books * pricePerBook;

    if (totalPrice > 100){
        DiscountPrice = totalPrice - (totalPrice * 0.05);
        cout << "Discounted Price is:" << DiscountPrice << endl;
    } else {
        cout<<"Total Price is:" << totalPrice << endl;
    }

    return 0;
}