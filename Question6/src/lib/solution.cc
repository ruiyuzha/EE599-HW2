#include "solution.h"
using namespace std;

//O(n)
int Solution::isPalindrome(char input[]) { 
  int length = strlen(input);
  int res=0;
  for(int i=0;i < length ;i++){
        if(input[i] != input[length-i-1]){
            res = 1;
            break;
        }
  }
  return res;
}


string Solution::ClearAllSpace(string input){
  int index = 0;
  if(!input.empty()){
    while( (index = input.find(' ',index)) != string::npos){
      input.erase(index,1);
    }
  }
  return input;
}

string Solution::ClearPun(string input){
  string res;
  for (string::size_type i = 0; i < input.size(); i++){
    if (!ispunct(input[i])){
      res += input[i];
    }
  }
  return res;
}

string Solution::LowerChar(string input){
  transform(input.begin(), input.end(), input.begin(), ::tolower);
  return input;
}

//O(n)
int Solution::IsApproximatePalindrome(string input){
  Solution solution;
  string str1=solution.ClearAllSpace(input);
  string str2=solution.ClearPun(str1);
  string str3=solution.LowerChar(str2);
  char p[20];
  strcpy(p,str3.c_str());
  int flag=isPalindrome(p);
  return flag;
}
