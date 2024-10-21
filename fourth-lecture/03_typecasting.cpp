// The file is going to give brief description about typecasting..

#include <iostream>
#include <string>
#include <typeinfo> // - this is used to find the type of variable.
using namespace std;

int main()
{
    float teaPrice = 49.99;
    int roundedTeaPrice = (int)teaPrice;
    cout << "Here, is tea new price " 
         << roundedTeaPrice;

    // Mismatch syntaxxx -- try to don't do use of these type of syntaxxx
    float shopPrice = 78.90;
    int roundedshopPrice = (short)shopPrice;
    cout << endl
         << roundedshopPrice
         << endl;

    // finding variable type - typeinfo library
    string khanName = "Kamran Khan is here..";
    
    cout << typeid(roundedshopPrice).name() << endl << "------=-=-=-=-=-=-";
    cout << typeid(khanName).name();
    
    return 0;

}