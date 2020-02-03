#include "src/lib/solution.h"
#include "gtest/gtest.h"
using namespace std;

TEST(AddTwoInteger, ReturnSum) {
  Solution solution;
  int input1=3;
  int input2=5;
  int actual = solution.Add(input1,input2);
  int expected = 8;
  EXPECT_EQ(expected, actual);
}

TEST(AddTwoString, ReturnCon) {
  Solution solution;
  string input3="abc";
  string input4="def";
  string actual = solution.Add(input3,input4);
  string expected = "abcdef";
  EXPECT_EQ(expected, actual);
}

TEST(AddIntString, ReturnSC) {
  Solution solution;
  string input5="559";
  string input6="EE";
  string actual = solution.Add(input6,input5);
  string expected = "EE559";
  EXPECT_EQ(expected, actual);
}

TEST(AddStringInt, ReturnCS) {
  Solution solution;
  string input5="EE";
  string input6="559";
  string actual = solution.Add(input5,input6);
  string expected = "EE559";
  EXPECT_EQ(expected, actual);
}