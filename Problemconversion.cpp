#include <iostream>
#include <cmath>
using namespace std;

//decalre conversions as constant variables
const float M_TO_FT = 0.3048;
const float CM_TO_M = 100;
const float IN_TO_FT = 12;

//declare all variables to be used globally
float convertedMeter = 0 ;
float convertedCM = 0;
float length = 0;
float feet;
float inches;
float userFeet;
float userInches;
float remainingCM;
float centimeters;
float meters;
float totalMeter;
float totalCM;
string loop = "yes";

//function to ask for user input
void userInput(){
  cout << "Please enter the number of feet: ";
  cin >> userFeet;
  cout << "Enter the number of inches: ";
  cin >> userInches;
}

//calculating function to convert feet and inches to meter and cm
void calculate(float feet, float inch){

  inch = inch / 12;
  feet = feet + inch; // total converted feet
  totalMeter = feet * M_TO_FT; // total converted centimeters
  remainingCM = totalMeter * CM_TO_M;
  meters = remainingCM/100;
  centimeters = fmod(remainingCM, CM_TO_M);

  /*float foot = 0;
  convertedMeter = feet*0.3048;


  foot = inches /12;
  convertedCM = (foot*0.3048) * 100;*/
}

//functino to output to screen
void output(){
  cout << "The length in meters and centimeters is: " << meters << "m " << centimeters << "cm" <<endl;
}

//main to call functions
int main(int argc, char**argv){

  while(loop != "exit"){ //while loop to continually ask user if they would like to continue calculation , exit loop is user inputs exit
    // call function
    userInput();
    calculate(userFeet, userInches);
    output();

    // ask user if they want to continue doing converions
    cout << "Would you like to do another conversion? enter 'exit' to stop. ";
    cin >> loop;
  }

  return 0;
}
