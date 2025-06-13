#include <stdexcept>

double calculator(double a, double b, char op) {
    switch(op){
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '/':
            return a / b;
        case '*':
            return a * b;
        default:
            throw std::invalid_argument("unknown value");   
    return 0.0;
}}