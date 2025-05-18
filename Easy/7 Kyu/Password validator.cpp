#include <string>

bool password(const std::string &pwd)
{
    /*
    
    There needs to be at least 1 uppercase letter.
    There needs to be at least 1 lowercase letter.
    There needs to be at least 1 number.
    The password needs to be at least 8 characters long.

    */

    if(pwd.size() < 8 ) return false;
    bool hasUpper = false,hasLower = false,hasDigit = false ;
    for( auto ch : pwd){
        if(std::isupper(ch)) hasUpper = true;
        if(std::islower(ch)) hasLower = true;
        if(std::isdigit(ch)) hasDigit = true;
    }
    return hasUpper == hasLower == hasDigit;
}
