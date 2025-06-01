#include <string>
#include<algorithm>
std::string cat_mouse(std::string x) {
    int count = std::count(x.begin(),x.end(),'.');
    return  count > 3 ? "Escaped!" :"Caught!" ;
}