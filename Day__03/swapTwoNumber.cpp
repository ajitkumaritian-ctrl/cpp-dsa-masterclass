#include<iostream>
using namespace std;
int main(){
  // Q3:
  // Input two integers from users,,,swap their value ,,,,using third temporary variable,,,,
  // print both values before and after swapping.

  int a, b;
  cout << "Enter 1st number:  ";
  cin >> a;
  cout << "Enter 2nd number: ";
  cin >> b;
  cout << "Number before swapping: " << endl
       << "First number = " << a << endl
       << "Second number = " << b << endl << endl;

  // SWAPPING
  int temp;
  temp = a;
  a = b;
  b = temp;
  cout << "Number after swapping: " << endl
       << "First number = " << a << endl
       << "Second number = " << b;


}