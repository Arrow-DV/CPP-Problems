#include <vector>
#include <string>
#include<algorithm>
bool check(const std::vector<std::string>& seq, const std::string& elem) {
    return std::count(seq.begin(),seq.end(),elem) != 0;
}