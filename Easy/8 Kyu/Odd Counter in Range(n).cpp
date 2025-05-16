#include<cmath>
int odd_count(int n){
  return n % 2 == 0 ? (n / 2) : std::ceil(n/2); 
}