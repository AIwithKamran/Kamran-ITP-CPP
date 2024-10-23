// Challenge 3: Relational and Logical Operators
// A tea subscription service offers a discount if the user buys more than 12 cups or if they are a member for more than a year. Write a program that checks if the user qualifies for a discount based on their input.

#include <iostream>
using namespace std;

int main() {
   int teaCups;
   int memberDuration;

   cout << "Please Enter Tea cups you have purchased.";
   cin >> teaCups;
   cout<< "Please Enter from how many years do you use our services..";
   cin >> memberDuration;

   if (teaCups > 12 || memberDuration > 1){
    cout<< "Good! you are eligable for this program.";
   }else{
    cout<< "You aren't able to qualify the program.";
   }
    return 0;
}