#include <vector>
#include <algorithm>
#include <iostream>
#pragma warning(disable : 4715) 


bool is_in_array(const std::vector<int>& vector, int number){
    auto it = std::find(vector.begin(), vector.end(), number);
    return it != vector.end();
}

int get_first_element(const std::vector<int>& v){
    for(int i = 0 ; i < (int)v.size(); i++){
        bool hasParent = false;
        for(int j = 0 ; j < (int)v.size(); j++){
            if(i == j) continue;
            if(v[j] * 2 == v[i] || (v[j] % 3 == 0 && v[j] / 3 == v[i])){
                hasParent = true;
                break;
            }
        }
        if(!hasParent){
            return v[i];
        }
    }
    return -1;
}

std::vector<int> solve(std::vector<int> v){
    std::vector<int> result;
    std::vector<bool> used(v.size(), false);

    int first = get_first_element(v);
    result.push_back(first);

    for(int i = 0; i < v.size(); i++){
        if(v[i] == first){
            used[i] = true;
            break;
        }
    }

    while(result.size() < v.size()){
        int current = result.back();
        bool found = false;

        for(int i = 0; i < v.size(); i++){
            if(used[i]) continue;

            if(v[i] == current * 2 || (current % 3 == 0 && v[i] == current / 3)){
                result.push_back(v[i]);
                used[i] = true;
                found = true;
                break;
            }
        }

        if(!found) break;
      }

    return result;
}