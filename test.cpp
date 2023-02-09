#include <iostream>
//Math functions addon 
#include <cmath>


using namespace std;

double cube (double num){

  double result = num * num * num;

  return result;

}

int main() 
{
  
  double num;

  double answer = cube (4.0);

  cout << answer << endl;


  return 0;
  
} 