#include<iostream>
using namespace std;
int main(){
  cout << "Calculate Volume of a Sphere:----" << endl;
  cout << "Enter radius of your sphere: ";
  float radius;
  cin >> radius;
  float volume = (4.0 / 3) * 3.14159 * radius * radius * radius;
  cout << "Volume of the sphere = " << volume << endl;
}