
#include<cmath>
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= std::sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

unsigned int oddNotPrime(unsigned int x) {
    unsigned int count = 0;
    for (unsigned int i = 1; i <= x; i += 2) {
        if (!isPrime(i)) {
            count++; 
        }
    }
    return count;
}
