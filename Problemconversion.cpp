#include <iostream>
#include <cmath>
using namespace std;

const float M_TO_FT = 0.3048;
const float CM_TO_M = 100;
const float IN_TO_FT = 12;

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

void userInput(){
  cout << "Please enter the number of feet: ";
  cin >> userFeet;
  cout << "Enter the number of inches: ";
  cin >> userInches;
}

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

void output(){
  cout << "The length in meters and centimeters is: " << meters << "m " << centimeters << "cm" <<endl;
}

int main(int argc, char**argv){
  userInput();
  calculate(userFeet, userInches);
  output();

  return 0;
}
