#include "solution.h"
using namespace std;

string Solution::SwapChar(string input,int index1,int index2) { 
  char tmp;
  tmp = input[index1];
  input[index1]=input[index2];
  input[index2]=tmp;
  return input; 
}

string Solution::ReverseString(string input){
  reverse(input.begin(),input.end());
  return input;
}

string Solution::LowerChar(string input){
  transform(input.begin(), input.end(), input.begin(), ::tolower);
  return input;
}
