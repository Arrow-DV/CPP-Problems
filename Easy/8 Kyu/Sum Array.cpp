#include <vector>
#include <numeric>
int sum(std::vector<int> nums) {
    int result = std::accumulate(nums.begin(),nums.end(),0);
    return result;
}