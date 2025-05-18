#include <sstream>
#include <bits/stdc++.h>

class Accumul
{
public:
    static std::string accum(const std::string &s){
        std::stringstream result;
        for (int x = 0; x < s.size(); x++) {
            result << (char)std::toupper(s[x]);
            for (int i = 0; i < x; i++) {
                result << (char)std::tolower(s[x]);
            }
            if (x != s.size() - 1) {
                result << "-";
            }
        }
        return result.str();
    }
};
