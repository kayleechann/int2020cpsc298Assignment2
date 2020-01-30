#include <iostream>
using namespace std;

int numberArray[9]; //create array up to 10 numbers
int userNum;

int main(int argc, char**argv){
  // for loop that takes in 10 number from user input
  for(int i = 0; i < 10; ++i) {
    cout << "give me a number: ";
    cin >> userNum; //get user input
    if(userNum < 0){ // if user input is negative, loop will break
      cout << "the entered number is negative, try a different number." << endl;
      break;
    }
    else {
      numberArray[i] = userNum; //store user input into array
    }
  }

  //for loop used to print array to screen
  for(int i = 0; i < 10; ++i){
    cout << numberArray[i] << " ";
  }

  return 0;
}
