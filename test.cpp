#include <iostream>
//Math functions addon 
#include <cmath>


using namespace std;


string getDayOfWeek (int dayNum) {

  string dayName;

  switch (dayNum) {

    case 0:
      dayName = "Sunday";
      break;
    case 1:
      dayName = "Monday";
      break;
    case 2:
      dayName = "Tuesday";
      break;
    case 3:
      dayName = "Wednesday";
      break;
    case 4:
      dayName = "Thursday";
      break;
    case 5:
      dayName = "Friday";
      break;
    case 6:
      dayName = "Saturday";
      break;
    default:
      dayName = "You made a wrong choose";
  }



  return dayName;

}


int main() 
{
  int dayNum;
  string result;

  cout << "what day is it?";
  cin >> dayNum;

  result = getDayOfWeek(dayNum);

  cout << "The day is " << result << endl; 


  return 0;
  
} 