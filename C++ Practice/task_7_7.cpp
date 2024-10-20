#include <iostream>
using namespace std;

int main(){
    char input;

    cout <<"Press 'B' to see magic. " <<endl;
    cin >> input;
    
    // IF Statement

    if (input == 'B' || input == 'b')
    {
        cout<<"\a";
        cout<<"You've pressed 'B'"<<endl;
    }
    else {
        cout<<"Try next time. Good Luck"<<endl;
    }

    return 0;
 }