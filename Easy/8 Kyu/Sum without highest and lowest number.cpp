#include<vector>
#include<algorithm>
using namespace std;

int sum(vector<int> numbers)
{
    if(numbers.size() == 0){
        return 0;
    }
    int result = 0 ;
    std::sort(numbers.begin(),numbers.end());
    for(int i = 1 ; i < numbers.size() - 1 ; i++) {
        result += numbers[i];
    }
    return result;

}