#include <string>
#include<sstream>

int content_weight(int bottle_weight, std::string scale)
{
    double r ;
    std::stringstream os(scale);
    std::string a1,a2,a3;
    os >> a1; // NUMBER
    os >> a2; // TEMP
    os >> a3; // SCALE

    if ( a3 == "larger"){
        r = std::stod( a1) ;
    }

    else{
        r =  1.0 / std::stod( a1)  ;
    }
    double bottle_only_weight =  bottle_weight / (1 + r);
    double box_content_weight = bottle_only_weight * r;
    return static_cast<int> (box_content_weight);


}