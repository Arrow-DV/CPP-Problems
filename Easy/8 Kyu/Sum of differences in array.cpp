#include <vector>
#include <algorithm>

int sumOfDifferences(const std::vector<int>& arr) {
    if (arr.size() <= 1) {
        return 0;
    }

    std::vector<int> sortedArr = arr;
    std::sort(sortedArr.begin(), sortedArr.end(), std::greater<int>());

    int result = 0;
    for (size_t i = 0; i < sortedArr.size() - 1; ++i) {
        result += sortedArr[i] - sortedArr[i + 1];
    }

    return result;
}
