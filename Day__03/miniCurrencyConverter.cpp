#include<iostream>
using namespace std;
int main(){
  // Q7:
  // Ask the user for an amount in in USD.
  // 1 USD = 83.5 INR, 0.92 EUR, 0.79 GBP
  // Convert and display the equivalent amount in all three currencies

  float usd_amount;
  cout << "Enter the amount in USD: ";
  cin >> usd_amount;
  cout << "Amount in INR = " << usd_amount * 83.5 << endl;
  cout << "Amount in EUR = " << usd_amount * 0.92 << endl;
  cout << "Amount in GBP = " << usd_amount * 0.79 << endl;
}