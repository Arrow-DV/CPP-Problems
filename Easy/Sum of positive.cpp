#include <vector>
int positive_sum (const std::vector<int> arr){
    int result = 0 ;
    for ( int i = 0 ; i < arr.size() ; i ++){
        if (arr[i] > 0 )
            result += arr[i];
    }
    return result;
}