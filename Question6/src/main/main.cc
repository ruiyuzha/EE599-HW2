#include <iostream>
#include "src/lib/solution.h"
using namespace std;

int main()
{
    Solution solution ;
    char input1[20];
    cin >> input1;
    if (solution.isPalindrome(input1)){
        cout << "is not a palindrome" << endl;
    }
    else{
        cout << "is a palindrome" << endl;
    }

    string str;
    cin >> str;
    if (solution.IsApproximatePalindrome(str)){
        cout << "is not a palindrome" << endl;
    }
    else{
        cout << "is a palindrome" << endl;
    }


    return EXIT_SUCCESS;
}