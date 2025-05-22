#include<string>
#include<algorithm>

bool XO(const std::string& str)
{
    int x_counter = 0 , o_counter = 0 ;
    std::string to_lower = str;
    std::transform(to_lower.begin(),to_lower.end(),to_lower.begin(),::tolower);
    for( char ch : to_lower) {
        if ( ch == 'x' ){
            x_counter ++;
        }
        else if ( ch == 'o'){
            o_counter ++;
        }
    }
    return x_counter == o_counter;
}