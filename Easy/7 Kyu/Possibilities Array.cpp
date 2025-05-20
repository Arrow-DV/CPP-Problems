/*

[1,2,0,3] => True
# Includes all numbers between 0 and a.length - 1 (4 - 1 = 3)

[0,1,2,2,3] => False
# Doesn't include all numbers between 0 and a.length - 1 (5 - 1 = 4)

[0] => True
# Includes all numbers between 0 and a.length - 1 (1 - 1 = 0).

*/

#include <vector>
#include <algorithm>

bool isAllPossibilities(std::vector<int> arr){
    int N = arr.size();
    std::sort(arr.begin(),arr.end());
    if ( N == 0 ) return true;
    for ( int i = 0 ; i < N  ; i ++){
        if ( arr[i] != i ){
            return false;
        }
    }
    return true;
}