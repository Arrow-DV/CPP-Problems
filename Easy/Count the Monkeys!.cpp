#include <vector>

std::vector<int> MonkeyCount(int n) {
    std::vector<int> Monkeys;
    for(int i = 1; i <=n ; i ++){
      Monkeys.push_back(i);
    }
  return Monkeys;
}