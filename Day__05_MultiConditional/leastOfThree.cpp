#include<iostream>
using namespace std;
int main(){
  // Take 3 positive integers input and print the least of them.
  int a, b, c;
  cout << "Enter a positive integer: ";
  cin >> a;
  cout << "Enter a positive integer: ";
  cin >> b;
  cout << "Enter positive integer: ";
  cin >> c;

  if (a <= b and a <= c){
    cout << "Lowest = " << a;
  }
  else if (b <= c and b <= a){
    cout << "Lowest = " << b;
  }
  else{
    cout << "Lowest = " << c;
  }
}