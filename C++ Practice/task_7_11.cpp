#include <iostream>
using namespace std;

int main() {
    float a = 5.0, b = 3.0, c = 2.0, d = 1.0;
    int Num2 = 1;

    float result = a * (b - c / d) + ++Num2;
    cout << "Result: " << result << endl;

    return 0;
}
