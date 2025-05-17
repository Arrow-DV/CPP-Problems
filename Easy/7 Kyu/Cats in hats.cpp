#include<iomanip>
#include<sstream>
#include<cmath>
#include<string>
class Kata
{
  public:
      std::string height(int n)
      {
            std::stringstream output;

            double a = 2000000.0;
            double r = 0.4;
            int terms = n + 1;

            double total_height = a * ( 1 - std::pow(r,terms)) / (1-r);
            output << std::fixed << std::setprecision(3) << total_height;
            return output.str();
      
      }
};