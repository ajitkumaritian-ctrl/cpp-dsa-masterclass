#include<iostream>
using namespace std;
int main(){
  // Q5:
  // Take length and width of a rectangle as float input
  // calculate area and perimeter and return both..

  int l, b;
  cout << "Enter length of the Rectangle: ";
  cin >> l;
  cout << "Enter breadth of the Rectangle: ";
  cin >> b;
  cout << "AREA = " << l * b << endl;
  cout << "PERIMETER = " << 2 * (l + b) << endl;
}