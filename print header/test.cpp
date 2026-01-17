#include "print.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int number = 42;
    print(number);

    char character = 'A';
    print(character);

    string text = "Hello, World!";
    print(text);

    double decimal = 3.14159;
    print(decimal);

    print("Hello, C++!");
    print(12345);
    print(69.69);

    return 0;
}