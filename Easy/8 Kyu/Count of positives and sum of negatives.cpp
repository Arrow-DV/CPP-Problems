#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    
    if ( input.size() == 0 ) return  { };
  
    int sum =0 , count = 0  ;
  
    for ( int i = 0 ; i < input.size(); i ++ ){
        input[i] > 0 ? count ++ : sum += input[i] ;
    }
    return  {count,sum};
}