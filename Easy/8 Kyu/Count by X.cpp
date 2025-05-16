#include <vector>

std::vector<int> countBy(int x,int n){
  std::vector<int> nums;
  for(int i = 1 ;i <= n ; i ++){
    nums.push_back( x*i);
  }
  return nums;
}