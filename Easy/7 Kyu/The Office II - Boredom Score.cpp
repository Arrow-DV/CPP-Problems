#include <map>
#include <string>

std::string boredom(const std::map<std::string, std::string> &staff){
    int total = 0;

    for(auto m : staff){
        std::string Second = m.second;

        if (Second == "accounts") total += 1;
        else if (Second == "finance") total += 2; 
        else if (Second == "canteen") total += 10;
        else if (Second == "regulation") total += 3;
        else if (Second == "trading" || Second == "change") total += 6;
        else if (Second == "IS") total += 8;
        else if (Second == "retail") total += 5;
        else if (Second == "cleaning") total += 4;
        else if (Second == "pissing about") total += 25;
    }

    if (total >= 100) {
        return "party time!!";
    } else if (total > 80) {
        return "i can handle this";
    } else {
        return "kill me now";
    }
}
