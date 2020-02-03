#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;
    string input="TEST";
    int index1=0;
    int index2=1;
    cout << "Input: ("<<input<<", "<<index1<<", "<<index2<<"), Output: "<<solution.SwapChar(input,index1,index2)<<endl;

    string input1="EE599";
    cout << "Input: "<<input1 <<", "<<"Output: "<<solution.ReverseString(input1)<<endl;

    string input2="EE599";
    cout << "Input: "<<input2 <<", "<<"Output: "<<solution.LowerChar(input2)<<endl;

    return EXIT_SUCCESS;
}