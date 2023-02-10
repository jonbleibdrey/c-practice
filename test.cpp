#include <iostream>
//Math functions addon 
#include <cmath>


using namespace std;



int main() 
{
  
int num1; 
int num2;
char oper;

cout << "Enter first number: ";
cin >> num1;
cout << "Enter first number 2: ";
cin >> num2;
cout << "Enter first operator: ";
cin >> oper;

int result;

if (oper == '+') {
  result = num1 + num2;
} else if(oper == '-'){
  result = num1 - num2;
} else if ( oper == '*') {
  result = num1 * num2;
} else if ( oper == '/') {
  result = num1 / num2;
} else {
  cout << "wrong input ";
  }
cout << result;

  return 0;
  
} 