#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
  double FindMedian(vector<int> &inputs);
  void print_vector(vector<int> v);
  vector<int> Reorder(vector<int> &inputs,int median);
};

#endif