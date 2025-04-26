#include<string>
std::string removeExclamationMarks(std::string str){
    std::string cleanString = "";
    for(int i = 0  ; i < str.length(); i++){
        if(str[i] == '!'){
            continue;
        }
        cleanString += str[i];
    }
    return cleanString;
}