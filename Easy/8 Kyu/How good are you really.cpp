#include <vector>
#include <numeric>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
    return (std::accumulate(classPoints.begin(),classPoints.end(),0) / classPoints.size() < yourPoints); 
}
