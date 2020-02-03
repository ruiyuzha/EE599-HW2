#include <iostream>
#include "src/lib/solution.h"
using namespace std;

int main()
{
    Solution solution ;
    int input1;
    int input2;
    cout << "Enter input1: ";
    cin >> input1;
    cout << "Enter input2: ";
    cin >> input2;
    cout << "input: (" << input1 << "," << input2 << "), output: " << solution.Add(input1,input2) << endl;

    string input3;
    string input4;
    cout << "Enter input1: ";
    cin >> input3;
    cout << "Enter input2: ";
    cin >> input4;
    cout << "input: (" << input3 << "," << input4 << "), output: " << solution.Add(input3,input4) << endl;

    string input5;
    string input6;
    cout << "Enter input1: ";
    cin >> input5;
    cout << "Enter input2: ";
    cin >> input6;
    if (solution.isNumber(input5))
       cout << "input: (" << input5 << "," << input6 << "), output: " << solution.Add(input6,input5) << endl;
    if (solution.isNumber(input6))
       cout << "input: (" << input5 << "," << input6 << "), output: " << solution.Add(input5,input6) << endl;
    return EXIT_SUCCESS;
}