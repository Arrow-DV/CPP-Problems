#include <string>
#include<algorithm>
#include<vector>
bool is_isogram(const std::string& str)
{

    if( str.size() == 0 || str.size() == 1) return true;
    std::vector<char> word_chars;
    for(char ch : str){
        word_chars.push_back(std::tolower(ch));
    }
    std::sort(word_chars.begin(), word_chars.end());
    const bool hasDuplicates = std::adjacent_find(word_chars.begin(), word_chars.end()) != word_chars.end();    return !hasDuplicates;
}