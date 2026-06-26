#include<iostream>
using namespace std;
int main(){

  // Q4:
  // Ask the user to enter any single character.
  // Print its ASCII value as an integer.
  // Also print the character that come right after it in ASCII order

  char c;
  cout << "Enter any single character: ";
  cin >> c;
  cout << "ASCII value of " << c << " = " << (int)(c) << endl;
  cout << "A character having ASCII " << (int)(c) + 1 << " = " << (char)((int)(c) + 1);
  
}