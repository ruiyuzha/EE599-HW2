#include "solution.h"
#include<iostream>
using namespace std;

void Solution::swap(int *a,int *b) { 
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}

