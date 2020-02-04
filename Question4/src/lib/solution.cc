#include "solution.h"
#include<iostream>
using namespace std;

//O(1)
void Solution::swap(int *a,int *b) { 
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}

