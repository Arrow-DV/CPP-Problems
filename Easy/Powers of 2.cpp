#include <vector>
#include <cstdint>
#include<cmath>
std::vector<uint64_t> powers_of_two(int n) {
    std::vector<uint64_t> result;
    for ( int i = 0 ; i <= n ; i ++ ){
        result.push_back(std::pow(2,i) );
    }
    return result;
}