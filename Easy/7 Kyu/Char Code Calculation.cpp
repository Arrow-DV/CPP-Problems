#include <string>
#include <algorithm>
#include <cctype>      
#include <vector>      
#include <sstream>
int calc(const std::string& x) {
    std::string upperCaseString = x;  
    std::string total1,total2;
    std::stringstream s;


    std::vector<std::string> asciiCodes;
    for (char c : upperCaseString) {
        std::string temp = std::to_string(int(c));
        s << temp;
    }
    total1 = s.str();
    total2 = total1;
    std::replace(total2.begin(),total2.end(),'7','1');

    int total_sum1 = 0 ;
    int total_sum2 = 0 ;
    for(char ch : total1) total_sum1 += ch - '0';
    for(char ch : total2) total_sum2 += ch - '0';

    return total_sum1 - total_sum2;
}
