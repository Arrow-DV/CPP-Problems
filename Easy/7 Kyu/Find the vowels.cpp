#include <vector>
#include <string>
#include <algorithm>
std::vector<int> vowelIndices(std::string& word)
{
    std::vector<int> res;
    std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    for ( int i = 1 ; i <  word.size() ; i ++){
        if(std::find(vowels.begin(),vowels.end(),std::tolower(word[i])) != vowels.end()){
            res.push_back(i);
        }
    }
    return res;
}