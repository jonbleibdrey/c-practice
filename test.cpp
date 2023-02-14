#include <iostream>
//Math functions addon 
#include <cmath>


using namespace std;



int main() 
{

  int secret = 7;
  int guess;
  int guessCount = 0;
  int guessLimit = 3;
  bool outOfGuesses = false;



  while(guess != secret  && !outOfGuesses){
    if (guessCount < guessLimit) {
          cout << "Enter guess? ";
          cin >> guess; 
          guessCount++;
    }else{
        outOfGuesses = true;
    }
  }

  if(outOfGuesses){
      cout << "You lose!";
  } else {
      cout << "You Win!";
  }
  



  return 0;
  
} 