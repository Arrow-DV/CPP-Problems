#include<cmath>
double startingMark(double bodyHeight)
{
    double slope = 3.9355;
    double intercept = 3.468;

    double result = slope * bodyHeight + intercept;

    return std::round(result * 100.0) / 100.0;
}