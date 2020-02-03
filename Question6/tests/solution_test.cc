#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>
using namespace std;

TEST(IsPalindrome1, ReturnIsPalindrome1) {
  Solution solution;
  char input1[20]="madam";
  int actual = solution.isPalindrome(input1);
  EXPECT_EQ(0, actual);
}

TEST(IsPalindrome2, ReturnIsPalindrome2) {
  Solution solution;
  char input2[20]="racecar";
  int actual = solution.isPalindrome(input2);
  EXPECT_EQ(0, actual);
}

TEST(IsPalindrome3, ReturnIsPalindrome3) {
  Solution solution;
  char input3[20]="10801";
  int actual = solution.isPalindrome(input3);
  EXPECT_EQ(0, actual);
}

TEST(IsApproPalindrome1, ReturnIsApproPalindrome1) {
  Solution solution;
  string str1="A man, a plan, a canal, Panama!";
  int actual = solution.IsApproximatePalindrome(str1);
  EXPECT_EQ(0, actual);
}

TEST(IsApproPalindrome2, ReturnIsApproPalindrome2) {
  Solution solution;
  string str2="Was it a car or a cat I saw?";
  int actual = solution.IsApproximatePalindrome(str2);
  EXPECT_EQ(0, actual);
}

TEST(IsApproPalindrome3, ReturnIsApproPalindrome3) {
  Solution solution;
  string str3="No 'x' in Nixon";
  int actual = solution.IsApproximatePalindrome(str3);
  EXPECT_EQ(0, actual);
}
