#include <iostream>
using namespace std;

int main(int argc, char**argv){
  int num;
  int a[4][5];
  int numRows = 4;
  int numColumns = 5;

  cout << "enter the numbers for the array: ";
  for (int i = 0; i < numRows; i++){
      for (int j = 0; j < numColumns; j++){
         cin >> num;
         a[i][j] = num;
      }
   }

  for(int i =0; i < numColumns; ++i){
  cout << a[0][i] << " ";
  }
  cout << endl;
  for(int i =0; i < numColumns; ++i){
  cout << a[1][i] << " ";
  }
    cout << endl;
  for(int i =0; i < numColumns; ++i){
  cout << a[2][i] << " ";
  }
  cout << endl;
  for(int i =0; i < numColumns; ++i){
   cout << a[3][i] << " ";
  }
  cout << endl;



  return 0;
}
