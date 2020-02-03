#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>
using namespace std;

TEST(SwapChar, ReturnSwapChar) {
  Solution solution;
  string input="TEST";
  int index1=0;
  int index2=1;
  string actual = solution.SwapChar(input,index1,index2);
  string expected = "ETST";
  EXPECT_EQ(expected, actual);
}

TEST(ReverseString, ReturnReverseString) {
  Solution solution;
  string input="EE599";
  string actual = solution.ReverseString(input);
  string expected = "995EE";
  EXPECT_EQ(expected, actual);
}

TEST(LowerChar, ReturnLowerChar) {
  Solution solution;
  string input="EE599";
  string actual = solution.LowerChar(input);
  string expected = "ee599";
  EXPECT_EQ(expected, actual);
}