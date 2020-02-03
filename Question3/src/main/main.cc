#include <iostream>
#include "src/lib/solution.h"
using namespace std;

int main()
{
    Solution solution;
    vector<int> v;
    vector<int> input1={1,2,2,4};
    cout << "Remove duplicates without using set: "<<endl;
    cout << "Before: {1,2,2,4}, "; 
    v=solution.RemoveDuplicates(input1);
    solution.print_vector(v);

    vector<int> input2={1,2,2,4};
    cout << "Remove duplicates using std::set: "<<endl;
    cout << "Before: {1,2,2,4}, "; 
    v=solution.RemoveDuplicatesSet(input2);
    solution.print_vector(v);

    vector<int> inputs3={1,2,3};
    cout << "Reverse the order: "<<endl;   
    cout << "Before: {1,2,3}, "; 
    v=solution.ReverseOrder(inputs3);
    solution.print_vector(v);
    vector<int> inputs4={1,2,3};

    cout << "Remove the odd elements: "<<endl;   
    cout << "Before: {1,2,3}, "; 
    v=solution.RemoveOdd(inputs4);
    solution.print_vector(v);
    vector<int> inputs5={1,2,3};
    vector<int> inputs6={4,5};

    cout << "Concatenate two input vectors: "<<endl;
    cout << "Before: {1,2,3},{4,5} "; 
    v=solution.ConcatenateTwo(inputs5,inputs6); 
    solution.print_vector(v);
      
    vector<int> inputs7={1,2,3};
    vector<int> inputs8={3,4,5};
    cout << "Find the intersection of two input vectors: "<<endl;
    cout << "Before: {1,2,3},{3,4,5} "; 
    v=solution.IntersectionTwo(inputs7,inputs8);
    solution.print_vector(v);
    return EXIT_SUCCESS;
}