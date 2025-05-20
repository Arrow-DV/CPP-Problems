#include <vector>
#include <algorithm>
#include <climits>
std::vector<int> solve(std::vector<int> array){
    std::vector<int> result;
    int maxRight = INT_MIN;
    for( int i = array.size() -1 ; i >= 0 ; i -- ){
        if ( maxRight < array[i]){
            maxRight = array[i];
            result.push_back(array[i]);

        }
    }
    std::sort(result.rbegin(),result.rend());
    return result;

}