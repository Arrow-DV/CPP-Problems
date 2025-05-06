#include <string>

bool inline feast(std::string beast, std::string dish) { return beast.front() == dish.front() && beast.back() == dish.back(); }