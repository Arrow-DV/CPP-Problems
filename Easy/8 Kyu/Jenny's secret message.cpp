#include<string>
std::string greet(std::string name) 
{
  name = name == "Johnny" ? "my love" : name;
  return "Hello, " + name + "!";

}