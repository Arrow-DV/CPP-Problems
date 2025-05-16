#include <vector>
#include<algorithm>
using namespace std; 

int count_sheep(vector<bool> arr) 
{
  /*
    TODO
  */
  vector<bool> true_only ;
  copy_if(arr.begin(),arr.end(),back_inserter(true_only),[](bool x) { return x == true;});
  return true_only.size();
}

