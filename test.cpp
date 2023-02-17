#include <iostream>
//Math functions addon 
#include <cmath>


using namespace std;


//class
//Basically a blueprint or a template for a book
class Book {

//the attributes of a book
  public:
    string title;
    int pages;
    string author;

};



int main() 
{

  //object 
  // is an object that gets created from the "class" above
  Book book1;
  book1.title = "Harry Potter";
  book1.author = "JK Rowling";
  book1.pages = 500;

  Book book2;
  book2.title = "Lord of the rings";
  book2.author = "Tolkein";
  book2.pages = 700;

  cout << book1.title << endl;
  cout << book2.author;


  return 0;
  
} 