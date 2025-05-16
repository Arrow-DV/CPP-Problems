#include <string>
#include <algorithm>
#include <cctype>

bool isPalindrom(const std::string& str)
{
    std::string lower_str = str;
    
    std::transform(lower_str.begin(), lower_str.end(), lower_str.begin(),
                   [](unsigned char c){ return std::tolower(c); });

    std::string str_reversed = lower_str;
    std::reverse(str_reversed.begin(), str_reversed.end());

    return lower_str == str_reversed;
}
