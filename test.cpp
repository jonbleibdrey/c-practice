#include <iostream>

//Math functions addon 
#include <cmath>


using namespace std;


int main() 
{

  //to get a number back from the user
  int age;
  
  cout << "Enter your age: ";
  cin >> age;
 

  cout << "you are " << age << " years old.";

  //to get a a string back from the user
  string name;

  cout << "Enter your name: " ;

  //this is the way to get a string, cin gets a prompt to pop up and name is the variable.
  getline(cin, name);

  cout << "Hello " << name;

  // you could use it mutiple times like this with catname and just name.
  string catname;

  cout << "Enter your cat name: " ;
  getline(cin, catname);
 

  cout << "Hello " << name << " and " << catname;

  return 0;
  
} 