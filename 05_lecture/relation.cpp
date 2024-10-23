// Relational Operatos < > <= >=

#include <iostream>
#include <string>
using namespace std;

int main() {
    int bottels;
    cout<<"Enter number of bottels. ";
    cin>> bottels;

    if(bottels > 40){
        cout<< "You win a golden badge.";
    }
    else if(bottels > 10 && bottels <=40){
        cout << "You go silver badge.";
    } else {
        cout<< "Sorry! but try next time it will help you in future..";
    }
    return 0;
}