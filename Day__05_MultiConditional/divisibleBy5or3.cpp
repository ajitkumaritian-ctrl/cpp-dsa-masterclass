#include<iostream>
using namespace std;
int main(){
  // Take positive integer input and tell if it is divisible by 5 or 3
  int n;
  cout << "Enter a positive integer: ";
  cin >> n;
  if (n % 15 == 0){
    cout << "Divisible by both 5 and 3.";
  }else if (n % 5 == 0){
    cout << "Divisible by 5.";
  }else if(n % 3 == 0){
    cout << "Divisible by 3.";
  }else{
    cout << "Not, divisible by 5 or 3.";
  }
}