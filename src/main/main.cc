#include <iostream>
#include "src/lib/solution.h"

int main()
{   
    Solution solution;
    std::string str = "ppappa", str_1 = "! a,w6?o`6(w a";
    std::cout << std::boolalpha << solution.IsPalindrome(str) << std::endl;
    std::cout << std::boolalpha << solution.IsApproxPalindrome(str_1) << std::endl;
    return EXIT_SUCCESS;
}