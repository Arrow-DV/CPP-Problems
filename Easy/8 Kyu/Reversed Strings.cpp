#include<string>
using namespace std;
string reverseString(string str){
    string reversed_String = "";
    for( int i = str.length() - 1 ; i >= 0  ; i -- ){
        reversed_String += str[i];
    }

    return reversed_String;
}