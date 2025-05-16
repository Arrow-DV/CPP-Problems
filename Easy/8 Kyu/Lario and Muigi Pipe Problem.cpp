#include <vector>      
#include <algorithm> 

std::vector<int> pipe_fix(const std::vector<int>& nums) {
    std::vector<int> sorted_nums = nums;

    std::sort(sorted_nums.begin(), sorted_nums.end());

    int minval = sorted_nums.front();
    int maxval = sorted_nums.back();

    std::vector<int> result;
    for (int i = minval; i <= maxval; ++i) {
        result.push_back(i);
    }

    return result;
}
