#include <vector>

std::vector<int> between(int start, int end) {
    std::vector<int> nums;
    for (; start < end + 1; start++) {
        nums.push_back(start);
    }
    return nums;
}
