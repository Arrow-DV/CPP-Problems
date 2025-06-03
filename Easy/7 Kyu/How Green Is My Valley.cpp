#include <vector>
#include <algorithm>

class Valley {
public:
    static std::vector<int> makeValley(std::vector<int>& arr) {
        std::sort(arr.rbegin(), arr.rend());

        std::vector<int> leftWing;
        std::vector<int> rightWing;

        for (size_t i = 0; i < arr.size(); ++i) {
            if (i % 2 == 0) {
                leftWing.push_back(arr[i]);  
            } else {
                rightWing.push_back(arr[i]); 
            }
        }

        std::reverse(rightWing.begin(), rightWing.end());

        leftWing.insert(leftWing.end(), rightWing.begin(), rightWing.end());

        return leftWing;
    }
};
