#include <vector>

std::vector<int> seqList(int first, int c, std::size_t l)
{
    std::vector<int> result;
    for (std::size_t count = 0; count < l; ++count)
    {
        result.push_back(first + count * c);
    }


    return result;
}