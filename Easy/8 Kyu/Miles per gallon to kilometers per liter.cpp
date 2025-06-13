#include<cmath>
double converter(int mpg)
{
    int kpl = mpg * 1.609344 / 4.54609188;
    return std::round(mpg * (   1.609344 /  4.54609188) * 100) /100;
}