// In This source file we are going to see how to create a simple hello world program in C++ and know about it how does it world.

#include <iostream> // Header File which import files from the library. #include is a preprocessor directive which tells the compiler to include the content of the file in the program.

using namespace std; // namespace is a delartive which is used to create function, variable etc like we can are having ready made functions in the library. std is a namespace which is used to create functions, variables etc.

int main() // main is a function which is used to execute the program. int is a return type of the function. () is a parameter list which is used to pass the arguments to the function.
{
    cout << "Hello World"; // cout is a predefined function which is used to print the output on the console. << is a insertion operator which is used to insert the data into the cout function. "Hello World" is a string which is used to print the output on the console.
    return 0;              // return is a keyword which is used to return the value to the function. 0 is a return value of the function. you can use 5 then return code is going to be 5, you can use 10 then return code is going to be 10.
}

// Ways to get output from namespace but specific not to import whole namespace.
// 1. Using std::cout
// 2. Using using std::cout; // This is used to import the specific function from the namespace.

// In the above program we have seen how to create a simple hello world program in C++ and know about it how does it world.

// Another way
// int main(){
//     std::cout << "Hello World" << std::endl;
//     return 0;
// };