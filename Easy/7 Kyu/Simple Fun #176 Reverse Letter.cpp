#include<string>
#include <algorithm>
std::string reverse_letter(const std::string &str)
{
    std::string result;
    for(char ch : str){
        if(std::isalpha(ch)){
            result.push_back(ch);
        }
    }
    std::reverse(result.begin(),result.end());
    return result; 
}