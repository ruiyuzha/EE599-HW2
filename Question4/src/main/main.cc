#include <iostream>
#include "src/lib/solution.h"
using namespace std;

int main()
{
    Solution solution ;
    int x=20, y=30;
    cout << "Before: x = 20, y = 30, we call Swap(x,y);" << endl;
    solution.swap(&x, &y);  
    std::cout <<"After: x = " << x << ", y = " << y << std::endl; 

    return EXIT_SUCCESS;
}