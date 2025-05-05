#include <string>
#include<algorithm>

std::string makeUpperCase (const std::string& input_str)
{

    
  std::string result = input_str;
  std::transform(input_str.begin(),input_str.end(),result.begin()
                 , [](unsigned char x) {
                   return toupper(x);
                 }
  );
  return result;
}