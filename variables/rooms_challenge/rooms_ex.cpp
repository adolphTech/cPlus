//
// Created by adolp on 08/02/2024.
//

#include <iostream>
using namespace std;


int main(){

    int number_of_small_room {0};
    int number_of_large_room {0};

    cout <<"How many small rooms do you have? " <<endl;
    cin >> number_of_small_room;

    cout <<"How many large rooms do you have? " <<endl;
    cin >> number_of_large_room;

    const double price_per_small_room {25.0};
    const double price_per_large_room {35.0};
    const double sales_tax {0.06};
    const int estimate_expiry {30};

    const double cost_of_small_rooms {number_of_small_room * price_per_small_room};
    const double cost_of_large_rooms {number_of_large_room * price_per_large_room};
    const double total_cost {cost_of_small_rooms + cost_of_large_rooms};
    const double total_tax {total_cost * sales_tax};

    cout << "Number of small rooms: " << number_of_small_room << endl;
    cout << "Number of large rooms: " << number_of_large_room << endl;
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;
    cout << "Cost of small rooms: $" << cost_of_small_rooms << endl;
    cout << "Cost of large rooms: $" << cost_of_large_rooms << endl;
    cout << "Total cost: $" << total_cost << endl;
    cout << "Total tax: $" << total_tax << endl;
    cout << "====================================" << endl;
    cout << "Total estimate: $" << total_cost + total_tax << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;



    return 0;

}