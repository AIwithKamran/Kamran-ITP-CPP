#include <iostream>
using namespace std;

int main() {
    int Num1 = 5, Num2 = 3, Num3 = 2, Num = 1;

    int result = Num1 + Num2 / Num3 + Num + ++Num2;
    cout << "Result: " << result << endl;

    return 0;
}
