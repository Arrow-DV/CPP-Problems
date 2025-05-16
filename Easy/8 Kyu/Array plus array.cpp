#include <vector>
#include<numeric>
int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
    int array1 = std::accumulate(std::begin(a), std::end(a), 0); 
    int array2 = std::accumulate(std::begin(b),std::end(b),0);
    return array1 + array2;
}