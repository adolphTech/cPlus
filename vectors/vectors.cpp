//
// Created by adolph on 09/02/2024.
//
#include <iostream>
#include <vector>

using namespace std;

int main(){

    //declare two empty vector intergers
    vector <int> vector1{};
    vector <int> vector2{};

    //add data to them using pushback
  vector1.push_back(10);
  vector1.push_back(20);

    vector2.push_back(100);
    vector2.push_back(200);

    //display data using at method and size()

    cout <<vector1.at(0) <<vector1.at(1)<<" Size "<< vector1.size()<<endl;

    cout <<vector2.at(0) <<vector2.at(1)<<" Size "<< vector2.size()<<endl;


    //declare an empty 2D vector
    //2d vector is a vector of vector
    vector<vector<int> > vector_2d{};

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    //display elements in vector_2d using at()
    cout << vector_2d.at(0).at(0) <<endl;
    cout << vector_2d.at(0).at(1)<<endl;

    cout << vector_2d.at(1).at(0)<< endl;
    cout << vector_2d.at(1).at(1)<<endl;

    cout <<"Size is " <<  vector_2d.size()<<endl;

    //change vector1 .at(0) to 1000
     vector1.at(0) = 1000;

     cout << vector1.at(0) << "====="<< vector1.at(1)<<endl;

    return 0;
}

