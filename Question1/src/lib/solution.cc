#include "solution.h"
#include <iostream>
#include <string>
using namespace std;

int Solution::Add(int input1,int input2){
    return input1+input2;
}

string Solution::Add(string input1, string input2){
    return input1+input2;
}

bool Solution::isNumber(string s) { 
    for (int i = 0; i < s.length(); i++) 
        if (isdigit(s[i]) == false) 
            return false;   
    return true; 
} 

