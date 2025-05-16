#include <vector>

std::vector<int> invert(std::vector<int> values)
{
    std::vector<int> reversed_values = {};
    for ( int i = 0 ; i < values.size() ; i++) {
        reversed_values.push_back(-(values[i]));
    }
    return reversed_values;
}