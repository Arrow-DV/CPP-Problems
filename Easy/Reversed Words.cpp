#include <string>
#include <algorithm>
std::string reverse_words(const std::string& str) {  
    
    std::string result =  "" ;
    std::string temp = "";
    for ( int i = 0 ; i < str.length() ; i ++ ) {
        if(str[i] == ' '){
            result = temp + " " + result;
            temp = "";
        }else{
            temp += str[i];
        }
    }
    result = temp + " " + result;
    result.pop_back();
  return result;
}
