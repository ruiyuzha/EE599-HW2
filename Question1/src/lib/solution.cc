#include "solution.h"
#include <iostream>
#include <string>
using namespace std;

//O(1)
int Solution::Add(int input1,int input2){
    return input1+input2;
}

//O(1)
string Solution::Add(string input1, string input2){
    return input1+input2;
}

//O(n)
bool Solution::isNumber(string s) { 
    for (int i = 0; i < s.length(); i++) 
        if (isdigit(s[i]) == false) 
            return false;   
    return true; 
} 

