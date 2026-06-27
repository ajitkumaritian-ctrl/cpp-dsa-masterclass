#include<iostream>
using namespace std;
int main(){
  // Take real number input and decide its integer or not
  float num;
  cout << "Enter a real number: ";
  cin >> num;
  int y = int(num);
  if(y==num){
    cout << "Integer.";
  }else{
    cout << "Not an integer.";
  }
}