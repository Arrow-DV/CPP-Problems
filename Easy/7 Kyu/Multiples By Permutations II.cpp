#include <algorithm> // for std::sort
#include <string>    // for std::to_string

unsigned long findLowestInt(unsigned int k) {
    unsigned long n = 1; 

    while (true) {
        unsigned long a = n * k;       
        unsigned long b = n * (k + 1); 

        std::string strA = std::to_string(a);
        std::string strB = std::to_string(b);

        std::sort(strA.begin(), strA.end());
        std::sort(strB.begin(), strB.end());

        if (strA == strB) {
            return n;
        }
        n++; 
    }
}
