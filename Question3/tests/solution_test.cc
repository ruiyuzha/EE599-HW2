#include "src/lib/solution.h"
#include "gtest/gtest.h"
using namespace std;

TEST(RemoveDuplicate, ReturnRemoveDuplicate) {
  Solution solution;
  vector<int> input1={1,2,2,4};
  vector<int> actual=solution.RemoveDuplicates(input1);
  vector<int> expected = {1,2,4};
  EXPECT_EQ(expected, actual);
}

TEST(RemoveDuplicateSet, ReturnRemoveDuplicateSet) {
  Solution solution;
  vector<int> input2={1,2,2,4};
  vector<int> actual=solution.RemoveDuplicatesSet(input2);
  vector<int> expected = {1,2,4};
  EXPECT_EQ(expected, actual);
}

TEST(ReverseOrder, ReturnReverseOrder) {
  Solution solution;
  vector<int> input3={1,2,3};
  vector<int> actual=solution.ReverseOrder(input3);
  vector<int> expected = {3,2,1};
  EXPECT_EQ(expected, actual);
}

TEST(RemoveOdd, ReturnRemoveOdd) {
  Solution solution;
  vector<int> input4={1,2,3};
  vector<int> actual=solution.RemoveOdd(input4);
  vector<int> expected = {2};
  EXPECT_EQ(expected, actual);
}

TEST(ConcatenateTwo, ReturnConcatenateTwo) {
  Solution solution;
  vector<int> input5={1,2,3};
  vector<int> input6={4,5};
  vector<int> actual=solution.ConcatenateTwo(input5,input6);
  vector<int> expected = {1,2,3,4,5};
  EXPECT_EQ(expected, actual);
}

TEST(IntersectionTwo, ReturnIntersectionTwo) {
  Solution solution;
  vector<int> input7={1,2,3};
  vector<int> input8={3,4,5};
  vector<int> actual=solution.IntersectionTwo(input7,input8);
  vector<int> expected = {3};
  EXPECT_EQ(expected, actual);
}