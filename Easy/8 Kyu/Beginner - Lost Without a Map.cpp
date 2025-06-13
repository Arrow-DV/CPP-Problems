std::vector<int> maps(const std::vector<int> & values) {
  std::vector<int> result ;
  for(int value : values){
    result.push_back(value + value);
  }
  return result;
}