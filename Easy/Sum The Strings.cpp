#include <string>

std::string sum_str(const std::string& a, const std::string& b) {
    return std::to_string(std::atoi(a.c_str()) + std::atoi(b.c_str()));
}
