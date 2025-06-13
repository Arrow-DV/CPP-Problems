#include <vector>
#include <string>
#include <algorithm>
std::string findNeedle(const std::vector<std::string>& haystack)
{
    for (int index = 0 ; index < haystack.size() ; index++){
        if(haystack[index] == "needle"){
            return "found the needle at position " + std::to_string(index);
        }
    }
}