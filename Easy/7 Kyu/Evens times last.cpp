#include <vector>

int even_last(std::vector<int> nums) {
  if(nums.size() == 0 ) return 0;
  int total_sum = 0 ;
  for(int i = 0 ; i < nums.size() ; i += 2){
        total_sum += nums[i];
  }
  return total_sum * nums[nums.size() - 1];
}