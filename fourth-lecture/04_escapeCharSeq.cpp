// first escape character then we are going to see its escape sequence...

#include <iostream>
#include <string>
#include <windows.h>  // for alerts sounds
using namespace std;

int main()
{
    // Trying the double-quotes and single quotes....
    string descriptionChai = "Not the best but we are \'trying\'";
    cout << descriptionChai << endl;

    string description = "Known as the \"best\" in Town.";
    cout << description
         << endl;

    // Escape Sequence -- visit the following link for more details. we have to try some of these..
    // https://learn.microsoft.com/en-us/cpp/c-language/escape-sequences?view=msvc-170

    cout << "We are here to help you at escape sequence..";

    cout << "\n Khan is here in new line..."; // - new line
    cout << "\t Khan is here with tab ";      // - Tab

    // for some escape sequence we have to do use of different libraries....
    char bellSound;
    cin >> bellSound;

    if (bellSound == 'b' || bellSound == 'B')
    {
        Beep(1200, 10000); // after comma 1000 = 12 second
        cout << "\a warning";
    }
    else
    {
        cout << "go somewehre else....";
    }

    return 0;
}
