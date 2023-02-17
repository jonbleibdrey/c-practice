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
    string author;
    int pages;
    // constructor, a function that runs with every object created.
    Book(string aTitle, string aAuthor, int aPages){
      title = aTitle;
      author = aAuthor;
      pages = aPages;
      
    }

};



int main() 
{

  //object 
  // is an object that gets created from the "class" above
  Book book1("Harry Potter", "JK Rowling", 500);
    // if you wanted to chnage antything you could.
    book1.title = "whatever"

      cout << book1.title << endl;



  Book book2("Lord of the rings", "Tolkein", 700);
  
    cout << book2.author;


  return 0;
  
} 