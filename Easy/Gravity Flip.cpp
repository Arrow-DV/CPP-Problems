#include <vector>
#include <algorithm>

std::vector<int> flip(const char dir, const std::vector<int>& arr) {
    std::vector<int> sorted_array = arr; 
    std::sort(sorted_array.begin(), sorted_array.end()); 

    if (dir == 'L') {
        std::reverse(sorted_array.begin(), sorted_array.end());
    }

    return sorted_array;
}
