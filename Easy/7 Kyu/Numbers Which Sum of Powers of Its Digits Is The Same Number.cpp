#include <iostream>
#include <vector>
#include <cmath>    
using namespace std;

int sumOfDigitsPower(int num, int exp) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;        
        sum += pow(digit, exp);       
        num /= 10;                  
    }
    return sum;
}

vector<int> eqSumPowdig(int hMax, int exp) {
    vector<int> result;             
    for (int num = 2; num <= hMax; num++) {  
        int sum = sumOfDigitsPower(num, exp);

        if (sum == num) {
            result.push_back(num);   
        }
    }
    return result;
}