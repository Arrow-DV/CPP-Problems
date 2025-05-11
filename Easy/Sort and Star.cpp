#include<vector>
#include<string>
#include<algorithm>

std::string twoSort(std::vector<std::string> s ){
    std::sort(s.begin(),s.end());
    std::string result = s.at(0);

    for ( int i = 1 ; i < result.size(); i+= 4){
        result.insert(i , "***");
    }
    return result;
}
