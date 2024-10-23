// Challenge 2: Assignment Operators
// Create a program where the user inputs the number of tea bags they have. If the number is less than 20, give them 10 extra bags using the += assignment operator. Display the updated total.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int teaBags;

    cout << "Please enter the quantity of tea Bags....";
    cin >> teaBags;

    if (teaBags < 20)
    {
        cout << "Please wait some time we are updating the valve.." << endl;
        teaBags += 10;
        cout << "Total Tea Pack Value is here..." << teaBags << endl;
    }
    else
    {
        cout << "You are not eligable for the Tea Pack Subsidy..";
    }

    return 0;
}