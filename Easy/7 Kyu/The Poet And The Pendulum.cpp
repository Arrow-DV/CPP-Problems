#include <vector>
#include <algorithm>
#include <deque>

std::vector<int> Pendulum(std::vector<int> values) {
    std::sort(values.begin(), values.end());
    std::deque<int> result;
    for (int i = 0; i < (int)values.size(); i++) {
        if (i % 2 == 0) result.push_front(values[i]);
        else result.push_back(values[i]);
    }
    return std::vector<int>(result.begin(), result.end());
}
