#include "src/lib/solution.h"
#include "gtest/gtest.h"

TEST(Swap, ReturnSwap) {
  Solution solution;
  int x=20, y=30;
  solution.swap(&x, &y); 
  int actual1 = x;
  int actual2 = y;
  EXPECT_EQ(actual1, 30);
  EXPECT_EQ(actual2, 20);
}