#include <iostream>
using namespace std;

//declare variables
float price;
float tax;

//add tax function
float addTax(float taxRate, float cost){
  taxRate = tax;
  cost = price * (1+taxRate); //calculate cost after sales tax
  return cost; //return value of item
}


int main(int argc,char**argv){

  //ask user for input values
  cout << "How much does the item cost? ";
  cin >> price;
  cout << "How much is the tax rate? ";
  cin >> tax;
  tax = tax / 100; //find tax in percentage s

  //print out price after sales tax
  cout << "The price after sales tax is: $"<< addTax(tax, price) << endl;

  return 0;
}
