#include<iostream>
using namespace std;
int main(){
  // Q6:
  // Take a 3-digit integer from user
  // Extract and print each digit separately
  // using % and / operators

  int num;
  cout<< "Enter a 3-digit number : ";
  cin >> num;
  int ld1 = num % 10;
  cout << "Unit place digit = " << ld1 << endl;
  num = num / 10;
  int ld2 = num % 10;
  cout << "Ten place digit = " << ld2 << endl;
  num = num / 10;
  int ld3 = num % 10;
  cout << "Hundred place digit = " << ld3 << endl;
  
}