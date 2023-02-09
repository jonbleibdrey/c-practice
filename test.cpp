#include <iostream>
//Math functions addon 
#include <cmath>


using namespace std;




int maxNum (int num1, int num2)
{
  int result;

// > - greater than, < - less than, >= - greater than equal (greater then the number or exactly that number), <= - lesser than equal , == -  comparison (asking is it the exact same) , != - not equal ( as long as its not equal that number it will return  true)

  if (num1 > num2 ){
     cout << num1 << " is greater then "<< num2 << endl;
     result = num1;
  } else  {
     cout << num2 << " is grater then "<< num1 << endl;
     result = num2;
  } 

  return result;
}


int maxNum3 (int num1, int num2, int num3 )
{
  int result;

// > - greater than, < - less than, >= - greater than equal (greater then the number or exactly that number), <= - lesser than equal , == -  comparison (asking is it the exact same) , != - not equal ( as long as its not equal that number it will return  true)

  if (num1 >= num2 && num1 >= num3){
    result = num1;
  
  } else if (num2 >= num1 && num2 >= num3) {

    result = num2;

  } else {
    result = num3;
  }

  return result;
}



int main() 
{
  
  int final;
  int final2;
  
  final = maxNum(5,7);
  final2 = maxNum3(5, 7, 35);

  cout << "The bigger number is " << final << " for maxNum and for maxNum3 it is " << final2  << endl;

  return 0;
  
} 