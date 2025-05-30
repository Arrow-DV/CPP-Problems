#include <iostream>
#include <string>

using namespace std;

string calculate(const string& input) {
    int result = 0;
    int currentNumber = 0;
    char operation = '+';
    
    size_t i = 0;
    while (i < input.length()) {
        currentNumber = 0;
        while (i < input.length() && isdigit(input[i])) {
            currentNumber = currentNumber * 10 + (input[i] - '0');
            i++;
        }
        
        if (operation == '+') {
            result += currentNumber;
        } else if (operation == '-') {
            result -= currentNumber;
        }
        
        if (i < input.length()) {
            if (input.compare(i, 4, "plus") == 0) {
                operation = '+';
                i += 4;
            } else if (input.compare(i, 5, "minus") == 0) {
                operation = '-';
                i += 5;
            } else {
                break;
            }
        }
    }
    
    return to_string(result);
}