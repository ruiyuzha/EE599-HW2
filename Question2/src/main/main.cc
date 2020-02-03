#include <iostream>
#include "src/lib/solution.h"
using namespace std;

int main()
{
    int a[]={1,2,3,4,5};
    //cout << "An array of integer is " << a << endl;
    cout << "Length of an array of integers = " << (sizeof(a)/sizeof(*a)) << endl;

    char b[]={'H','e','l','l','o'};
    //cout << "An array of char is " << b << endl;
    cout << "Length of an array of char = " << (sizeof(b)/sizeof(*b)) << endl;

    float c[]={3.14,2.68};
    //cout << "An array of float is " << *c << endl;
    cout << "Length of this an array of float is = " << (sizeof(c)/sizeof(*c)) << endl;

    return EXIT_SUCCESS;
}