#include <iostream>
using namespace std;

//zero both function
void zeroBoth(int& ref1, int& ref2){
  ref1 = 0;
  ref2 = 0;
}

int main(int argc, char**argv){
  int num1;
  int num2;

  //ask for user input for two numbers
  cout << "enter the first number: ";
  cin >> num1;
  cout<< "enter the second number: ";
  cin >> num2;

  cout << "num1 before zeroBoth(): " << num1 << endl;
  cout << "num2 before zeroBoth(): " << num2 << endl;

  //call zeroBoth function to zero both functions 
  zeroBoth(num1, num2);

  cout << "num1 after zeroBoth(): " << num1 << endl;
  cout << "num2 before zeroBoth(): " << num2 << endl;


  return 0;
}
