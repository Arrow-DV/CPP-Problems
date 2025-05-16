#include <vector>
#include <algorithm>
using namespace std; 

int findSmallest(vector <int> list)
{
    std::sort(list.begin(),list.end());
    return list.front();
}