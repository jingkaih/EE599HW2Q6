#include "solution.h"

bool Solution::IsPalindrome(std::string str)
{ 
  std::string r_str;
  int len = str.size() - 1;
  for(int i = len; i >= 0; i--)
  {
      r_str.push_back(str[i]);
  }
  return str == r_str;
}
bool Solution::IsApproxPalindrome(std::string str)
{
  std::string str_refined;
  for(auto s : str)
  {
    if(isalpha(s))
    str_refined.push_back(s);
  }
  return IsPalindrome(str_refined);
}