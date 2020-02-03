#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>
using namespace std;

TEST(ReorderOdd, ReturnReorderOdd) {
  Solution solution;
  vector<int> inputs={637, 231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500};
  vector<int> actual = solution.Reorder(inputs,solution.FindMedian(inputs));
  vector<int> expected = {43,43,21,10,7,0,69,900,637,500,231,123,99};
  EXPECT_EQ(expected, actual);
}

TEST(ReorderEven, ReturnReorderEven) {
  Solution solution;
  vector<int> inputs={231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500};
  vector<int> actual = solution.Reorder(inputs,solution.FindMedian(inputs));
  vector<int> expected = {43,43,21,10,7,0,900,500,231,123,99,69};
  EXPECT_EQ(expected, actual);
}