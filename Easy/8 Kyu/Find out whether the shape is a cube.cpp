bool is_cube(int volume, int side)
{
    return side < 1 ? false : (volume == side * side * side) ;
}