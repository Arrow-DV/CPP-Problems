#include<string>
#include<unordered_set>

std::string solve(std::string a, std::string b) {
    std::unordered_set<char> setA(a.begin(),a.end());
    std::unordered_set<char> setB(b.begin(),b.end());
    std::string result = "";
    for ( char ch : a){
        if(setB.find(ch) == setB.end()){
            result += ch;
        }
    }

    for ( char ch : b){
        if(setA.find(ch) == setA.end()){
            result += ch;
        }
    }
    return result;

    
}
