// Assignment Operator

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int teaBags;

    cout << "Enter the no. of tea Bags. " << endl;
    cin  >> teaBags;
    cout << "Please wait some time we are checking the value." << endl;

    if (teaBags < 10)
    {
        // method one. teaBags = teaBags + 5;
        teaBags += 5; // shorthand
        cout << "Tea Bags has been updated. " << "\"" << teaBags << "\"" << endl;
    }
    // here is no need of else so that's the reason why we are not using it....

    return 0;
}