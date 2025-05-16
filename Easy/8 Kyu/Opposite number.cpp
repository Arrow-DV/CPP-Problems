#include<cmath>
int opposite(int number) 
{
  return number < 0 ? abs(number) : -number;
}