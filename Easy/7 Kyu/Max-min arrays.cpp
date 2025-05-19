#include<vector>
#include<algorithm>

std::vector<int> solve(std::vector<int>v) {
    std::sort(v.begin(),v.end());
    std::vector<int> result;
    int left = 0;
    int right = v.size() - 1;
    while ( left <= right){
        if ( right >= left){
            result.push_back(v[right]);
            right --;
        }
        if ( left <= right){
            result.push_back(v[left]);
            left ++ ;
        }
    }
    return result;
}