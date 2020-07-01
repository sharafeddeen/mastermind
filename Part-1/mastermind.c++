// Ahmed Sharafaldeen
// CSC-150, Fall 2019
// Mastermind Part 1

/* Part 0:
  Write stubs (with specification) in order to get this
  program to compile without any errors or warnings.
  Compile using the following command:

  c++ -Wall -Wno-sign-compare -o mastermind mastermind.c++
*/


#include<iostream>
#include"messages.h"
#include"codemaker.h"

using std::string;
using std::cin;
using std::cout;


/*
  Initialize string "guess" which shows the user's input
  Starts the count of guesses from count = 1 and updates
  the count after each guess.
  Parameter: guess_ count - current count of guesses
  RETURNS: the updated count
*/
string get_user_guess(int guess_count){
  //stub
  string user_guess;
  return user_guess;
}


/*
  Print feedback on user's guess.
  Parameters:
    - string guess - user's input
    - string code - computer's code
*/
string print_feedback(string guess, string code){
  //stub
  string feedback;
  return feedback;
}



int main(){
  print_greeting();
  string code = generate_code();
  int guess_count = 1;
  string guess; //same as string guess = "";
  while(guess != code){
    guess = get_user_guess(guess_count);
    guess_count++;
    print_feedback(guess, code);
  }
  print_closing_message();
}
