#include "solution.h"
using namespace std;

//O(1)
string Solution::SwapChar(string input,int index1,int index2) { 
  char tmp;
  tmp = input[index1];
  input[index1]=input[index2];
  input[index2]=tmp;
  return input; 
}

//O(n)
string Solution::ReverseString(string input){
  reverse(input.begin(),input.end());
  return input;
}

//O(n)
string Solution::LowerChar(string input){
  transform(input.begin(), input.end(), input.begin(), ::tolower);
  return input;
}
