#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int square_sum(const vector<int> &numbers)
{
    vector<int> sqrt_numbers;
    transform(numbers.begin(), numbers.end(), back_inserter(sqrt_numbers), [](int x)
              { return x * x; });
    return accumulate(sqrt_numbers.begin(), sqrt_numbers.end(), 0);
}