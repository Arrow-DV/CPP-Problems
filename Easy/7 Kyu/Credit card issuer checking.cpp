#include<string>
std::string getIssuer(const std::string &number)
{
    /*
    | Card Type  | Begins With          | Number Length |
|------------|----------------------|---------------|
| AMEX       | 34 or 37             | 15            |
| Discover   | 6011                 | 16            |
| Mastercard | 51, 52, 53, 54 or 55 | 16            |
| VISA       | 4                    | 13 or 16      |
    */
    std::string FirstTwoChars = number.substr(0,2);
    int Length = number.size();
    if ( (FirstTwoChars == "34" || FirstTwoChars == "37") && Length == 15){
        return "AMEX";
    }
    else if (number.substr(0,4) == "6011" &&  Length == 16 ){
        return "Discover";
    }
    else if ((FirstTwoChars == "51" || FirstTwoChars == "52" || FirstTwoChars == "53" || FirstTwoChars == "54" || FirstTwoChars == "55") && Length == 16 ){
        return "Mastercard";
    }
    else if (number[0] == '4' && (Length == 13  || Length == 16)){
        return "VISA";
    }
    return "Unknown";
}