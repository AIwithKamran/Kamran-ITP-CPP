#include <iostream>
using namespace std;

int main(){
    float priceUser;
    cout << "Please Enter the base price for tea.";
    cin >> priceUser;

    int priceUserChange = priceUser/10;
    priceUser = priceUser + priceUserChange;

    cout << "The Price by 10% hike is here. " << priceUser;

}