#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(IsPalindromeShould, ReturnFalse) {
  Solution solution;
  std::string str = "banana";
  bool actual = solution.IsPalindrome(str);
  bool expected = false;
  EXPECT_EQ(expected, actual);
}
TEST(IsPalindromeShould, ReturnTrue) {
  Solution solution;
  std::string str = "level";
  bool actual = solution.IsPalindrome(str);
  bool expected = true;
  EXPECT_EQ(expected, actual);
}
TEST(IsApproxPalindromeShould, ReturnTrue) {
  Solution solution;
  std::string str = "! a,w6?o -6(w a";
  bool actual = solution.IsApproxPalindrome(str);
  bool expected = true;
  EXPECT_EQ(expected, actual);
}
TEST(IsApproxPalindromeShould, ReturnFalse) {
  Solution solution;
  std::string str = "! a,w?o t(w a";
  bool actual = solution.IsApproxPalindrome(str);
  bool expected = false;
  EXPECT_EQ(expected, actual);
}