#include<vector>
#include<string>
#include<algorithm>
std::string capitalize(std::string s, std::vector<int> idxs)
{
    for(int index = 0 ; index < s.size() ; index ++ ){
        if ( std::find(idxs.begin(),idxs.end(),index) != idxs.end()){
            s[index] = std::toupper(s[index]);
        }
    }
    return s;
}