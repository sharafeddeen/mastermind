#include<iostream>
#include<vector>

using std::cout;
using std::string;
using std::vector;


/*
A helper function that checks whether a character
is in a string.
PARAMETERS: j, code
RETURNS: TRUE if j is in code, FALSE otherwise.
*/
bool isin(char j, string code){
  for(int i = 0; i < 4; i++){
    if(code[i] == j){
      return true;
    }
  }
  return false;
}


/*
  A helper function that computes the number of
  red pegs (the letters that exist guess and code
  and in the same places.)
  PARAMETERS: guess, code
  RETURN: An integer whose value is the number of
  red pegs.
*/
int red_count(string guess, string code){
  if(guess == code){
    return 0;
  }
  int red_count = 0;
  for(int i = 0; i < 4; i++){
    char j = guess[i];
    if(isin(j, code) && code[i] == j){
      red_count += 1;
    }
  }
  return red_count;
}



/*
  A helper function that computes the number of
  white pegs (the letters that exist guess and code
  but in different places.)
  PARAMETERS: guess, code
  RETURN: An integer whose value is the number of
  white pegs.
*/
int white_count(string guess, string code){
  if(guess == code){
    return 0;
  }
  int white_count = 0;
  for(int i = 0; i < 4; i++){
    if(isin(guess[i], code) && code[i] != guess[i]){
      white_count += 1;
    }
    if(isin(guess[i], code) && code[i] == guess[i]){
      white_count -= 1;
    }
  }
  return white_count;
}



/*
  Print feedback on user's guess.
  Parameters:
    - string guess - user's input
    - string code - computer's code
*/
void print_feedback(string guess, string code){
  int red = red_count(guess, code);
  int white = white_count(guess, code);
  if(guess != code){
    cout << red << " red, " << white << " white. \n";
  }
}