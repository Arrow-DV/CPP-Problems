#include <string>
#include <iomanip> 
#include <sstream>

std::string seriesSum(int n) {
    if (n == 0)
        return "0.00"; 

    double result = 0.0;
    int denominator = 1; 

    for (int i = 0; i < n; i++) {
        result += 1.0 / denominator; 
        denominator += 3; 
    }

    std::ostringstream out;
    out << std::fixed << std::setprecision(2) << result;
    return out.str();
}
