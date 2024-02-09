//
// Created by adolph on 07/02/2024.
//
#include <iostream>


using std::cout;
using std::cin;
using std::endl;

int main() {

    //cout << "Hello" << " World!" << endl; // prints Hello, World! and takes cursor to next line
    //cout <<"Hello\nOut\nThere"; // prints Hello World! and takes cursor to next line
   int num1;
   int num2;
   double num3;

    cout << "Enter an integer: ";
    cin >> num1;
    cout << "Enter another integer: ";
    cin >> num2;
    cout << "You entered " << num1 << " and " << num2 << endl;
    cout << "Enter a double: ";
    cin >> num3;
    cout << "You entered " << num3 << endl;


    return 0;
}