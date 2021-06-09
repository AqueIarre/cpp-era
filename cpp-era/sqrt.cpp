#include <iostream>
#include <cmath>
using namespace std;

int num;
float solve;
string check;

void askCalc(){
  do{
  cout << "Please insert your number." << endl;
  cin >> num;
  if (num < 0){
    num = 0;
    cout << "Nani?! that's not a valid number." << endl;
    cout << "Please insert a valid one: " << endl;
    cin >> num;
  }
  solve = pow(num, 0.5);
  cout << "The sqrt is: " << solve << endl;
  cout << "Would you like to do it again?" << endl;
  cout << "If so, press 'Y' or 'y' and the enter key: " << endl;
  cin >> check;
  if (check != "Y" || check != "y"){
    cout << "Ok, bye 👋!" << endl;
  }
  }while (check == "Y" || check == "y");
}

int main(){
  askCalc();
  return 0;
}
