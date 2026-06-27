#include<iostream>
using namespace std;
int main(){
  //Take positive number input and tell if it is divisible by 5 or not.
  int n;
  cout << "Enter a positive integer: ";
  cin >> n;
  if(n%5==0){
    cout << "Divisible by 5.";
  }
  if (n%5!=0){
    cout << "Not divisible by 5.";
  }
}