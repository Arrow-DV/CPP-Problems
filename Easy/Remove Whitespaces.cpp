#include <string>

std::string no_space(const std::string& str)
{
    std::string result = "";
    for(int i = 0; i < str.length() ; i++){
      if (str[i] == ' '){
        continue;
        
      }
      result += str[i];
    }
   return result;
}