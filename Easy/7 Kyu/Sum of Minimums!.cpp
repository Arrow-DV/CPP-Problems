#include <vector>
#include <algorithm>
#include <numeric>
int sum_of_minimums(const std::vector<std::vector<int>> &numbers)
{
    std::vector<int> res;
    for(std::vector<int> arr1 : numbers){
        res.push_back(*std::min_element(arr1.begin(),arr1.end()));
    }
    return std::accumulate(res.begin(),res.end(),0);

}