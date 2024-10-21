// Input form the user: There is main two type of input from the user.. a. string b. int

#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main()
{
    // First Method
    int teaPriceUser;
    cin >> teaPriceUser;
    cout << "The price of tea is here..."
         << teaPriceUser
         << endl;

    // Second Method
    cout << "Here is teh Tea by Get Line...";
    cin.ignore();  // just because I have used the cin method above due to which it is not going to take input.  
    string teaGrade;
    getline(cin, teaGrade);
    cout << "well, the updated tea price is here...."
         << teaGrade
         << endl;

    cout << typeid(teaGrade).name() << endl;
    return 0;
}