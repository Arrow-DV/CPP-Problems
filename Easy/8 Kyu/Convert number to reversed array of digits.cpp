#include <iostream>
#include <vector>
#include <algorithm>  // not used here, can be removed

std::vector<int> digitize(unsigned long n) 
{       
    std::vector<int> result; 
    if (n == 0) {
        return {0};
    }
    while (n != 0) {
        result.push_back(n % 10);  
        n /= 10;                   
    return result;
}

