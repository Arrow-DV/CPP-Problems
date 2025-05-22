#include <string>
#include <array>
#include <sstream>
#include <map>
#include <iomanip>
#include <cctype>
#include <algorithm>
using namespace std;

string getMonthNumber(string month) {
    map<string, string> monthMap = {
        {"JAN", "01"}, {"FEB", "02"}, {"MAR", "03"}, {"APR", "04"},
        {"MAY", "05"}, {"JUN", "06"}, {"JUL", "07"}, {"AUG", "08"},
        {"SEP", "09"}, {"SEPT", "09"}, {"OCT", "10"}, {"NOV", "11"}, {"DEC", "12"},
        {"JANUARY", "01"}, {"FEBRUARY", "02"}, {"MARCH", "03"}, {"APRIL", "04"},
        {"JUNE", "06"}, {"JULY", "07"}, {"AUGUST", "08"}, {"SEPTEMBER", "09"},
        {"OCTOBER", "10"}, {"NOVEMBER", "11"}, {"DECEMBER", "12"}
    };
    for (char& c : month) c = toupper(c);
    return monthMap[month];
}

string driver(const array<string, 5>& data) {
    string forename = data[0];
    string middle = data[1];
    string surname = data[2];
    string dob = data[3];
    string gender = data[4];

    string license = "";

    for (int i = 0; i < 5; ++i) {
        if (i < surname.length()) license += toupper(surname[i]);
        else license += '9';
    }

    int day, year;
    string monthStr;
    replace(dob.begin(), dob.end(), '-', ' ');
    istringstream iss(dob);
    iss >> day >> monthStr >> year;

    string monthNum = getMonthNumber(monthStr);
    string yearStr = to_string(year);
    char decade = yearStr[2];
    char yearDigit = yearStr[3];

    int monthInt = stoi(monthNum);
    if (gender == "F") monthInt += 50;

    ostringstream oss;
    oss << decade;
    oss << setw(2) << setfill('0') << monthInt;
    oss << setw(2) << setfill('0') << day;
    oss << yearDigit;
    oss << (char)toupper(forename[0]);
    oss << (middle.empty() ? '9' : (char)toupper(middle[0]));
    oss << "9AA";

    license += oss.str();
    return license;
}
