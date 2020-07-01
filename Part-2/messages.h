

#include<iostream>

using std::cout;
using std::string;


/*
  Print a greeting to the user
*/
void print_greeting(){
  cout << "     Welcome to my Mastermind program! \n";
  cout << "----------------------------------------------- \n";
  cout << "  I'm thinking of a 4 letter code that uses \n";
  cout << "     the letters A, B, C, D, E, and F. \n";
  cout << "Duplication is allowed. Can you break the code? \n";
  cout << "----------------------------------------------- \n";
}


/*
  Print a closing message
*/
void print_closing_message(){
  cout << "Congratulations! You broke the code! \n";
}

