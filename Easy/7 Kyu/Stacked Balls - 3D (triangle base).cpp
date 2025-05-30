#include<cmath>
using std::sqrt;
double stack_height_3d(int layers)
{
    double verticalSpacing = sqrt(2.0 / 3.0);
    return layers == 0 ?  0.0 : (1 + (layers - 1) * verticalSpacing);
}