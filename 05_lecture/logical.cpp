// Logical Operator...

#include <iostream>
using namespace std;

int main()
{
    bool isStudent;
    int cups;
    cout << "Are you a student?";
    cin >> isStudent;
    cout << "How many cups you have purchased?";
    cin >> cups;

    // If Else Program is here.
    if (isStudent || cups > 15){
        cout<<"You are eligable for this program.";
    } else{
        cout<<"You aren't eligable for this program.";
    }
        return 0;
}