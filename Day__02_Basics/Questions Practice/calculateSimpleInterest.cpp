#include<iostream>
using namespace std;
int main(){
  int p, r, t;
  cout << "Enter principle: ";
  cin >> p;
  cout << "Enter rate of interest: ";
  cin >> r;
  cout << "Enter time: ";
  cin >> t;
  cout << "Interest = " << (p * r * t) / 100;

}