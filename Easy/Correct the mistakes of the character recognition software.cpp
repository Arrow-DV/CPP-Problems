#include <string>

/*
S is misinterpreted as 5
O is misinterpreted as 0
I is misinterpreted as 1
*/
std::string correct(std::string str){
    std::string Clear_Result = "";

    for ( int i = 0 ; i < str.size() ; i ++ ){
        if(str[i] == '5'){
            Clear_Result += 'S'; 
        } 
        else if(str[i] == '0'){
            Clear_Result += 'O';
        }
        else if ( str[i] == '1'){
            Clear_Result += 'I';
        }
        else{
            Clear_Result += str[i];
        }
    }
    return Clear_Result;

}