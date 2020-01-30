#include <iostream>
#include <string>
using namespace std;

int Add(int input1,int input2){
    return input1+input2;
}

string Add(string input1, string input2){
    return input1+input2;
}

string Add(string input1, int input2){
    return input1+to_string(input2);
}
