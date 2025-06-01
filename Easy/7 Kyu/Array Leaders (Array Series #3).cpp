#include <vector>
#include <algorithm>

std::vector<int> arrayLeaders(const std::vector<int>& numbers)
{
    std::vector<int> result;
    int rightSum = 0; 

    for (int i = numbers.size() - 1; i >= 0; --i)
    {
        if (numbers[i] > rightSum)
        {
            result.push_back(numbers[i]);
        }

        rightSum += numbers[i]; 
    }

    std::reverse(result.begin(), result.end());
    return result;
}
