#include <vector>
int grow(std::vector<int> nums) {
    int multiply_result = 1;
    for ( int i =0 ; i < nums.size(); i ++){
        multiply_result *= nums[i];
    }
    return multiply_result;
}