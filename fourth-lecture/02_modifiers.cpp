// This file is going to be all about modifiers in C++

#include <iostream>
using namespace std;

int main(){
    // Let's try unsigned modifier -- it will give garbage number but it is going to display wrong number.
    unsigned teaPrice = -100;
    cout<<teaPrice << endl; 
    cout << "Please check c++ price.... \n --------";

    // Now try the postive number let's check it...
    unsigned bookPrice = 1200;
    cout<< "\n Please check book price.." << bookPrice << endl << "-----------";


    // Let's Try {Long Modifier} -- long long int = 18 digits
    long long int shopPrice = 123456789901234567;
    cout<< "The shop price is here. " << shopPrice << endl << "-----------";

    // Let's try the {long}
    long cabinPrice = 1234567890;
    cout<< "The Cabin price is here. " << cabinPrice << "-----------";
    
    return 0;

}