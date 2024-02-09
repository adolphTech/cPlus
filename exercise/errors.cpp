//
// Created by adolp on 06/02/2024.
//

#include <iostream>
// using namespace std; this is good but not for large projects

using std::cout;
using std::cin;
using std::endl;


int main()
{
    int favorite_number;
    int second_fav;
    cout << "Enter your favorite number between 1 and 100: ";
    cin >> favorite_number;


   cout << "Enter the second:";
   cin >> second_fav;


   cout << "Amazing!! That's my favorite number too!" << endl;

   cout << "No really!! " << favorite_number << " and "<< second_fav<< " is my favorite number!" << endl;

    return 0;
}
