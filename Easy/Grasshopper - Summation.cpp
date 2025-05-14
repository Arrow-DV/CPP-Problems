#include<numeric>
#include<vector>
int summation(int num){
    std::vector<int> result(num + 1) ;
    std::iota(result.begin(),result.end(),0);
    return std::accumulate(result.begin(),result.end(),0);
}