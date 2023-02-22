#include <iostream>
//Math functions addon 
#include <cmath>


using namespace std;

class Movie {
  private:
  string rating;
  public:
  string title;
  string director;
  

  Movie(string aTitle, string aDirector, string aRating){
    title = aTitle;
    director = aDirector;
    setRating(aRating);


  }

  void setRating(string aRating){
    rating = aRating;

    if(aRating == "G"|| aRating == "PG-13" || aRating == "R" || aRating == "NR" || aRating == "PG"){
      rating = aRating;
    }else{
      rating = "NR";
    }
  }

  string getRating(){
    return rating;
  }
};

int main() 
{

 Movie avengers("Th Avengers", "Micheal jordan", "R");

 avengers.setRating("PG-13");

 cout << avengers.getRating();


  return 0;
  
} 