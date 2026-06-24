#include<iostream>
using namespace std;
int main(){
  // Characters internally store numbers (ASCII)
  // Integers are already numbers


  char ch1 = 'A';
  char ch2 = 'a';
  cout << "A + a = " << ch1 + ch2; // 162

  cout << "ASCII value of A = " << ch1 << endl; // A
  cout << "ASCII value of A = " << (int)ch1 << endl; // 65
  cout << "ASCII value of a = " << ch2 << endl; // a
  cout << "ASCII value of a = " << (int)ch2 << endl; // 97

  char zero = '0';
  cout << "ASCII value of 0 = " << zero; // 0
  cout << "ASCII value of 0 = " << (int) zero; // 48 


  // Same stored value different interpretation....
  char ch = 65;
  cout << ch; // A
  cout << int(ch); // 65 --- typecasting
  
  //Typecasting --- a core concept in c++ memory handling
      //  cout << char_variable --> prints symbol
      //  cout << (int)char_variable ---> prints ASCII number
      



}