#include <iostream>
#include "src/lib/solution.h"
using namespace std;

int main()
{
    Solution solution;
    vector<int> v;
    vector<int> v1;
    vector<int> inputs={637, 231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500};
    cout << "before: ";
    solution.print_vector(inputs);
    cout<<"after: ";
    v=solution.Reorder(inputs,solution.FindMedian(inputs));
    solution.print_vector(v);
    vector<int> inputs1={231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500};
    cout << "before: ";
    solution.print_vector(inputs1);
    cout<<"after: ";
    v1=solution.Reorder(inputs1,solution.FindMedian(inputs1));
    solution.print_vector(v1);

    return EXIT_SUCCESS;
}