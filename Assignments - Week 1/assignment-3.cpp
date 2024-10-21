#include <iostream>
#include <string>
using namespace std;

int main(){
    string teaUserWant;
    int teaCups;
    cout<<"Please Write which one tea you want \t";
    getline(cin, teaUserWant);
    cout<<"Please write how much quantity you want... \t";
    cin>> teaCups;

    cout << "Ohhh dude are you mad that you are ordering to much more than required... \n" << "Your tea type is. " << teaUserWant << " & quantity is... " << teaCups;
}