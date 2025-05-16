#include <vector>
#include <numeric>
int get_average(std::vector <int> marks)
{
    int average = std::accumulate(marks.begin(),marks.end(),0) / marks.size();
    return average;
}