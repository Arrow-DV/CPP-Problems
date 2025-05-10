#include<string>
#include <sstream>

using namespace std;

string bonus_time(int salary, bool bonus)
{
    stringstream bonusLine;
    string dollar = "$";
    bonusLine << dollar << (bonus ? salary * 10 : salary );
    return bonusLine.str();
    
}