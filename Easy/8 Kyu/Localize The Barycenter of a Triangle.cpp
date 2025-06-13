#include <utility>
#include<cmath>
using point = const std::pair<double, double>;


std::pair<double, double> barTriang(point p1, point p2, point p3) {
    double xO = (p1.first + p2.first + p3.first) / 3.0; 
    double yO = (p1.second + p2.second + p3.second) / 3.0;
    xO = std::floor(xO * 10000.0 + 0.5) / 10000.0;
    yO = std::floor(yO * 10000.0 + 0.5) / 10000.0;  
    return {xO, yO};
}