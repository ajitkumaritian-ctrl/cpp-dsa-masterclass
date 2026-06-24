#include<iostream>
using namespace std;
int main(){

  // PRE Increment (++x) ----> phle increase --> Then use it
  int x = 5;
  cout << ++x << endl; // 6
  cout << x << endl; // 6

  // POST Increment (x++) ---> phle use ----> Then increase
  int y = 5;
  cout << y++ << endl; // 5
  cout << y << endl;  // 6
}