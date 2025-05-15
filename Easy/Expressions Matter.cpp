#include <algorithm> 
unsigned short int expressionsMatter(unsigned short int a, unsigned short int b, unsigned short int c)
{

    return std::max({a * ( b + c) , a * b * c , a + b * c , (a+ b) * c, a + b + c}  ) ;
}
