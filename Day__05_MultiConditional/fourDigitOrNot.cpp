#include<iostream>
using namespace std;
int main(){
  // Take positive integer input and tell if it is a four digit number or not
  int n;
  cout << "Enter a number: ";
  cin >> n;
  int y = (-1) * n;
  if (n >= 1000 and n <= 9999){
    cout << "Yes, its a 4-digits number.";
  }else if(y >= 1000 and y <= 9999){
    cout << "Its a 4-digit number.";
  }else{
    cout << "Not, a 4-digit number.";
  }
}