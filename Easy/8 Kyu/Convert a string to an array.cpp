#include <vector>
#include <string>

std::vector<std::string> string_to_array(const std::string& s) {
    std::vector<std::string> result;
    std::string temp = "";
    char delimiter = ' ';
    for(char ch : s){
        if(ch != delimiter){
            temp += ch;
        }
        else{
            result.push_back(temp);
            temp.clear();
        }
        
    }
    result.push_back(temp);
    return result; 
}
