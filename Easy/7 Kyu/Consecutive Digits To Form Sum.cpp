#include <cmath>

bool is_Integer(double x) {
    return std::floor(x) == x;
}

bool consecutiveDucks(unsigned int num) {
    double logBase2 = std::log10(num) / std::log10(2);
    return !is_Integer(logBase2); 
}