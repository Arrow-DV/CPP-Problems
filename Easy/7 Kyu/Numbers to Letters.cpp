#include <string>
#include <vector>

std::string switcher(const std::vector<std::string>& arr) {
    std::string result;

    for (const std::string& numStr : arr) {
        int num = std::stoi(numStr); 

        if (num >= 1 && num <= 26) {
            char ch = 'z' - (num - 1);
            result += ch;
        } else if (num == 27) {
            result += '!';
        } else if (num == 28) {
            result += '?';
        } else if (num == 29) {
            result += ' ';
        }
    }

    return result;
}