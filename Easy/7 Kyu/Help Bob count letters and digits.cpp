#include<string>
#include<algorithm>
int countLettersAndDigits(std::string input)
{
    return std::count_if(input.begin(),input.end(),
[](char ch) {
    return std::isalpha(ch) || std::isdigit(ch);
});
}