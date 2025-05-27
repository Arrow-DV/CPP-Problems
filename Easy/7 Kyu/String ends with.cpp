#include <string>
#include<algorithm>

bool solution(std::string const &str, std::string const &ending) {
    if(ending == "") return true;
    /*
        string = "hello"
        ending = "llo"
        i = ending length
        make a copy of the string
        reverse the copy
        looping in the copy 
        if not the same the character
        return false
    */ 
    std::string reversed = str;
    std::string reversed_ending = ending;
    std::reverse(reversed.begin(),reversed.end());
    std::reverse(reversed_ending.begin(),reversed_ending.end());

    for ( int i = 0 ; i != reversed_ending.size() ; i ++){
        
        if ( reversed[i] != reversed_ending[i]){
            return false;
        }
    }
    return true;
}

