// While loop is going to be here...
// Challange: Challenge: Write a program that keeps track of tea orders. Each time a cup of tea is made, decrease the number of cups remaining. The loop should run until all cups are served.

#include <iostream>
using namespace std;
int main()
{
    int teaCups;
    cout << "How much tea Cups you want? \n";
    cin >> teaCups;

    while (teaCups > 0)
    {
        teaCups--;
        cout << "Serving a Cup of tea. \n" << teaCups << " Remaining" << endl;
    }

    return 0;
}