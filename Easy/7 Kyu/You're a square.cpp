#include <algorithm> // for std::sort
#include <string>    // for std::to_string

unsigned long findLowestInt(unsigned int k) {
    unsigned long n = 1; // start from 1 since we want strictly positive n

    while (true) {
        unsigned long a = n * k;       // first number: n * k
        unsigned long b = n * (k + 1); // second number: n * (k + 1)

        // convert both numbers to strings so we can sort their digits
        std::string strA = std::to_string(a);
        std::string strB = std::to_string(b);

        // sort the strings to compare their digit composition
        std::sort(strA.begin(), strA.end());
        std::sort(strB.begin(), strB.end());

        // if sorted digits are equal, return n
        if (strA == strB) {
            return n;
        }

        n++; // otherwise try next n
    }
}
