#include<iostream>
using namespace std;
int main(){
  // Take 3 positive integers input and tell if they can be the sides of a triangle or not.
  int a, b, c;
  cout << "Enter 1st side: ";
  cin >> a;
  cout << "Enter 2nd side: ";
  cin >> b;
  cout << "Enter 3rd side: ";
  cin >> c;
  if (a+b > c and b+c > a and c+a > b){
    cout << "YES," << a <<", " << b <<", "<< c << " can be 3 sides of a triangle.";
  }else{
    cout << "They can not be sides of a triangle.";
  }
}