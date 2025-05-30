#include<vector>
#include<cmath>
int elevator_distance(const std::vector<int>& floors) {
    int distance = 0;
    for (size_t i = 1; i < floors.size(); ++i) {
        distance += std::abs(floors[i] - floors[i - 1]);
    }
    return distance;
}