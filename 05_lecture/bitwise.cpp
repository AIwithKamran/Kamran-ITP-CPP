// Bitwise Operator
// well, it is used is places specifically when ever we want to solve problem in interview or leet code problem or many more .. Ok but keep in mind that it is used.

#include <iostream>
using namespace std;

int main() {
    int khan = 23; // Binary  == 10111
    int khan2 = 89; // Binary == 1011001
    
    if (khan & khan2){
        cout<<"Great";
    }
    else{
        cout<<"Sorry";                                   
    }
    
    return 0;
}