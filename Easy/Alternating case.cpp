#include<string>
std::string to_alternating_case(const std::string& str)
{
    std::string alternate_case = "";
    for(int i = 0 ; i < str.length() ; i++){
        if(isupper(str[i])){
            alternate_case += tolower(str[i]);
        }
        else if ( islower(str[i])){
            alternate_case += toupper(str[i]);
        }
        else{
            alternate_case += str[i];
        }
    }
	return alternate_case;
}