#include<iostream>

using std::string;
using std::cout;
using std::cin;




bool is_alpha(string a){
  for(int i = 0; i < a.length(); i++){
    if(not isalpha(a[i])){return false;}
  }
  return true;
}




/*
A helper function. Determins if user string is uppercase.
RETURNS: true if string is uppercase, and false otherwise.
*/
bool is_uppercase(string user_guess){
  for(int i = 0; i < user_guess.length(); i++){
    if( not isupper(user_guess[i])){
      return false;
    }
  }
  return true;
}


bool is_valid(string user_guess){
  if(not is_alpha(user_guess) || not is_uppercase(user_guess)
     || user_guess.length() != 4){
    return false;
  }
  for(int i = 0; i < 4; i++){
    if(user_guess[i] > 'F'){
      return false;
    }
  }
  return true;
}


/*
  Prompts the user to guess the code. In doing so, tells
  the user the current guess count. Repeated prompts the
  user for a guess until the user enters a valid code.
  RETURNS: the user's guess
*/
/*
  Initialize string "user_guess" which shows the user's input.
  Starts the count of guesses from count = 1 and updates
  the count after each guess.
  Parameter: guess_ count - current count of guesses
  RETURNS: the updated count
*/
string get_user_guess(int guess_count){
  cout << "Guess " << guess_count << ": ";
  string user_guess;
  cin >> user_guess;

  while(not is_valid(user_guess)){
    cout << "That's not a valid code. \n";
    cout << "Guess again: ";
    user_guess = "";
    cin >> user_guess;
    }
  return user_guess;
}