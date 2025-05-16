#include <string>

std::string people_with_age_drink(int age)
{
    std::string Drink = "";
    
    if (age < 14) {
        Drink = "toddy";
    }
    else if (age < 18) {
        Drink = "coke";
    }
    else if (age < 21) {
        Drink = "beer";
    }
    else {
        Drink = "whisky";
    }
    
    return "drink " + Drink;
}
