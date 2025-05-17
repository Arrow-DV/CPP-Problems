#include<vector>
std::vector<std::vector<int>> make_latin_square(int n) {
    std::vector<std::vector<int>> squares(n, std::vector<int>(n));

    for ( int i = 0 ; i < n ; i ++){
        for ( int j = 0 ;  j < n ; j ++ ){
            squares[i][j] = ( i + j ) % n + 1;
        }

    }
    return squares;
}