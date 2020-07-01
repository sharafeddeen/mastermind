#include<iostream>
#include<cstdlib>
#include<ctime>

using std::cout;
using std::string;


/*
  Initialize the string code and generate computer's code
  RETURNS: computer's code
*/
string generate_code(){
  string list = "ABCDEF";
  string code = "";
  int i;
  srand(time(0));
  for(int x = 0; x < 4; x++){
    i = rand() % 5 + 0;
    code += list[i];
  }

  return code;
}