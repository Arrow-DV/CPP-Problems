#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool validateBase(const string& number, int base) {
    for (char ch : number) {
        int value;

        if (isdigit(ch)) {
            value = ch - '0';
        } else if (isalpha(ch)) {
            value = ch - 'A' + 10;
        } else {
            return false;
        }

        if (value >= base) {
            return false;
        }
    }
    return true;
}