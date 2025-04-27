#include <string>

using namespace std; 

string sliceString (string str )
{

    if(str.length() <= 2){
        return "";
    }
    str = str.substr(1,str.length() - 2);
    return str;
}