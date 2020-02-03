#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  void print_vector(vector<int> v);
  vector<int> RemoveDuplicates(vector<int> &input);
  vector<int> RemoveDuplicatesSet(vector<int> &input);
  vector<int> ReverseOrder(vector<int> &input);
  vector<int> RemoveOdd(vector<int> &input);
  vector<int> ConcatenateTwo(vector<int> &input1, vector<int> &input2);
  vector<int> IntersectionTwo(vector<int> &input1,vector<int> &input2);
};

#endif