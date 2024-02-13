//
// Created by adolph on 13/02/2024.
//
#include<iostream>
using namespace std;

int main(){
  int num{0};
  const int min{10};
  const int max {100};

  cout<< "Enter an integer between " <<min << " and " << max  <<endl;
  cin >> num;

  if(num >= min){
      cout << "\n=============================If statement 1 ============"<<endl;
      cout<< num << " Is greater than o equal to  " << min<<endl;

      int diff {num - min};
      cout << num << " is " << diff <<  " greater than " << min<<endl;
  }

  if(num <= max){
      cout << "\n=============================If statement 2 ============"<<endl;
      cout << num << "Is less than or equal to "<< max << endl;

      int diff { max - num};
          cout << num << " is "<< diff << " less than " <<  max << endl;


  }





  //cout<<num<<endl;

    return 0;
}