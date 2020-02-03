#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Ex1, ReturnEx1) {
  Solution solution;
  string from="add";
  string to="egg";
  int actual = solution.isMappable(from, to);
  EXPECT_EQ(1, actual);
}

TEST(Ex2, ReturnEx2) {
  Solution solution;
  string from="extreme";
  string to="egg";
  int actual = solution.isMappable(from, to);
  EXPECT_EQ(0, actual);
}

TEST(Ex3, ReturnEx3) {
  Solution solution;
  string from="harder";
  string to="waiter";
  int actual = solution.isMappable(from, to);
  EXPECT_EQ(0, actual);
}

TEST(Ex4, ReturnEx4) {
  Solution solution;
  string from="aabbrr";
  string to="ddeekk";
  int actual = solution.isMappable(from, to);
  EXPECT_EQ(1, actual);
}