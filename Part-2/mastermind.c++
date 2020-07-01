// Ahmed Sharafaldeen
// CSC-150, Fall 2019
// Mastermind Part 2



#include<iostream>
#include"messages.h"
#include"codemaker.h"
#include"codebreaker.h"
#include"feedback.h"


using std::string;
using std::cin;
using std::cout;



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
