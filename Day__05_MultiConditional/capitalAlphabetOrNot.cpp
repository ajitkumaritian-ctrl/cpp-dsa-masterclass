#include<iostream>
using namespace std;
int main(){
  //Take char input and tell if it is -- Capital Alphabet
  char ch;
  cout << "Enter a character: ";
  cin >> ch;
  int y = (int)ch;
  if(y >= 65 and y <= 90){
    cout << "Yes, You entered a Capital Alphabet --> " << ch;
  } else{
    cout << "No, Capital Alphabet character.";
  }
}