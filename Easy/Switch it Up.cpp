#include <string>
#include <map>
std::string switch_it_up(int number){
  std::map<int,std::string> NumbersMap = {
    {0,"Zero"},
    {1,"One"},
    {2,"Two"},
    {3,"Three"},
    {4,"Four"},
    {5,"Five"},
    {6,"Six"},
    {7,"Seven"},
    {8,"Eight"},
    {9,"Nine"},
    {10,"Ten"},
    
  };
  return NumbersMap[number];
}