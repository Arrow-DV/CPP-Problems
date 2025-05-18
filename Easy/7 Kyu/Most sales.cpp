#include <string>
#include <vector>
#include<algorithm>
#include<tuple>
std::vector<std::string> top3(
        const std::vector<std::string>& products,
        const std::vector<int>& amounts,
        const std::vector<int>& prices)
{
    std::vector<std::tuple<std::string,int,int>> revs;
    for(int i = 0 ; i < products.size();i++){
      int rev = amounts[i] * prices[i];
      revs.push_back(std::make_tuple(products[i],rev,i));
    }
    std::sort(revs.begin(),revs.end(),
      [](const std::tuple<std::string,int,int> a , const std::tuple<std::string,int,int> b){
          if(std::get<1>(a) != std::get<1>(b)){
            return std::get<1>(a) > std::get<1>(b);
          }
          return std::get<2>(a) < std::get<2>(b);
        }
      );
    std::vector<std::string> result;
    for(int x = 0 ; x < 3 ; x ++ ){
      result.push_back(std::get<0>(revs[x]));
    }
    return result;
}