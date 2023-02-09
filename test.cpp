#include <iostream>
//Math functions addon 
#include <cmath>


using namespace std;



int main() 
{
  
  bool isMale = true;
  bool isTall = false;

  // AND operator
  if(isMale && isTall){
    cout << "You are a male, and tall";
    // ! NOT
  } else if(isMale && !isTall){

    cout << "you are short male";

  } else if (!isMale && isTall) {

    cout << "you are Tall but not male";

  }else {
    cout << "you are female, and short";
  }

  // OR operator 
  // if(isMale || isTall){
  //   cout << "You are a male, and tall";
  // } else {
  //   cout << "you are female, and probably short";
  // }


  return 0;
  
} 