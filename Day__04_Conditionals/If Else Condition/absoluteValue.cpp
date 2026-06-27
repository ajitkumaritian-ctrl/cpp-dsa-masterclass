#include<iostream>
using namespace std;
int main(){
  //Absolute means Mod value
  int num;
  cout << "Enter any integer: ";
  cin >> num;
  if(num<0){
    cout << "Absolute vale of " << num << " = " << (-1) * num;
  }else{
    cout << "Absolute value of " << num << " = " << num;
  }
}