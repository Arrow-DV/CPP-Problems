#include <string>

std::string neutralise(const std::string& s1, const std::string& s2)
{
    std::string result;
    for(int i = 0 ; i < s1.size() ; i ++ ){
        if(s1[i] == '+' && s2[i] == '+'){
            result.push_back('+');
        }
        if(s1[i] == '-' && s2[i] == '-'){
            result.push_back('-');
        }
        if(s1[i] != s2[i] ){
            result.push_back('0');
        }
    }
    return result;
}