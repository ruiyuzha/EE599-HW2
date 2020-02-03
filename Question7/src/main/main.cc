#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    string from1="add";
    string to1="egg";
    cout << "Input: from = "<<from1<<", to = "<<to1<<endl;
    cout << "Output: {";
    int res1 = solution.isMappable(from1, to1);
    cout << "}"<<endl;

    string from2="extreme";
    string to2="egg";
    cout << "Input: from = "<<from2<<", to = "<<to2<<endl;
    cout << "Output: {";
    int res2 = solution.isMappable(from2, to2);
    cout << "}"<<endl;

    string from3="harder";
    string to3="waiter";
    cout << "Input: from = "<<from3<<", to = "<<to3<<endl;
    cout << "Output: {";
    int res3 = solution.isMappable(from3, to3);
    cout << "}"<<endl;

    string from4="aabbrr";
    string to4="ddeekk";
    cout << "Input: from = "<<from4<<", to = "<<to4<<endl;
    cout << "Output: {";
    int res4 = solution.isMappable(from4, to4);
    cout << "}"<<endl;

    return EXIT_SUCCESS;
}