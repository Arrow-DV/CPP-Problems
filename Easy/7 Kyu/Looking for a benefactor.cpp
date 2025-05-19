#include <vector>
#include <cmath>
#include <numeric>
#include <stdexcept>

class NewAverage {
public:
    static long long newAvg(std::vector<double> &arr, double new_average) {
        double total = std::accumulate(arr.begin(), arr.end(), 0.0);
        int n = arr.size();
        double required_total = new_average * (n + 1);
        double x = required_total - total;
        if (x <= 0) {
            throw std::logic_error("You wsp");
        }
        return std::ceil(x);
    }
};
