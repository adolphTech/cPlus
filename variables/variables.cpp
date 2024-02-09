//
// Created by adolp on 07/02/2024.
//

#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using  std::string;

int main(){
    int length {0};
    int width {0};
    int area {0};
    string name{};

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    cout << "Enter your name: ";
    cin >> name;

    area = length * width;
    cout << name << " The area of the rectangle is: " << area << endl;


    return 0;
}