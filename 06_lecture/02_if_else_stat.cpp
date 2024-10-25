// If Else Statment...
// Challenge: Write a program that checks if a tea shop is open. If the current hour (input by the user) is between 8 AM and 6 PM, the shop is open; otherwise, it’s closed.

#include <iostream>
using namespace std;

int main()
{
    int userTime;
    cout << "Please Enter which time you want to visit our shop."  << endl;
    cin >> userTime;

    if (userTime >= 8 && userTime <= 18)
    {
        cout << "Please visit now. Tt will be best choice for you.";
    }
    else
    {
        cout << " Sorry! Please visit in specific time.";
    }

    return 0;
}

// دعاگو ۔ کامران خان