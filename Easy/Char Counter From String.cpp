#include <string>

unsigned int strCount(const std::string& word, char letter){
  unsigned int short counter = 0;
  for(int i = 0 ; i < word.length(); i ++){
    if(word[i] == letter){
        counter += 1;
    }
  }
  return counter;
}