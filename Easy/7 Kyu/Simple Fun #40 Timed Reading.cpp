#include <string>
#include <vector>
#include <cctype>
#include <chrono>

bool is_letter(char c) {
    return std::isalpha(static_cast<unsigned char>(c));
}

std::vector<std::string> extract_words(const std::string& text) {
    std::vector<std::string> words;
    std::string current;
    for (char c : text) {
        if (is_letter(c)) {
            current += c;
        } else if (!current.empty()) {
            words.push_back(current);
            current.clear();
        }
    }
    if (!current.empty()) {
        words.push_back(current);
    }
    return words;
}

int timed_reading(int maxLength, const std::string &text) {
    int counter = 0;
    std::vector<std::string> words = extract_words(text);
    for (int i = 0; i < words.size(); i++) {
        if (words[i].size() <= maxLength) {
            counter++;
        }
    }
    return counter;
}
