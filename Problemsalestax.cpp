#include <iostream>
using namespace std;

float price;
float tax;

float addTax(float taxRate, float cost){
  taxRate = tax;
  cost = price * (1+taxRate);
  return cost;
}


int main(int argc,char**argv){

  cout << "How much does the item cost? ";
  cin >> price;
  cout << "How much is the tax rate? ";
  cin >> tax;
  tax = tax / 100;

  cout << "The price after sales tax is: $"<< addTax(tax, price) << endl;

  return 0;
}
