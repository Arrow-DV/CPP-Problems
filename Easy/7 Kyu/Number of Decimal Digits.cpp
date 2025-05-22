#include <stdint.h>

int digits(uint64_t n) {
    int i = 0 ;
    if ( n == 0 ) return 1;
    for ( ; n != 0 ; i ++ ) {
        n /= 10;
    }
    return i;
}