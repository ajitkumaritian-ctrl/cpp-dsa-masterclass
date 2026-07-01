#include<iostream>
using namespace std;
int main(){
  // Take 3 positive integers input and print the greatest of them.
  int a, b, c;
  cout << "Enter a positive integer: ";
  cin >> a;
  cout << "Enter positive integer: ";
  cin >> b;
  cout << "Enter positive integer: ";
  cin >> c;

  if (a >= b && a >= c){
    cout << "Greatest = " << a;
  }
  else if (b >= a && b >= c){
    cout << "Greatest = " << b;
  }
  else{
    cout << "Greatest = " << c;
  }
}