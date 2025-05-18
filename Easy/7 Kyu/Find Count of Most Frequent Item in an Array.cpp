#include <vector>
#include <bits/stdc++.h>
#include<map>
unsigned int most_frequent_item_count(const std::vector<int>& collection) {
    std::map<int,int> Counts = {};
    for ( auto index : collection){
        Counts.insert(std::make_pair(index,std::count(collection.begin(),collection.end(),index)));
    }
    int max = std::count(collection.begin(),collection.end(),collection[0]);
    for(auto pair : Counts){
        if ( max < pair.second){
            max = pair.second;
        }
    }
    return max;
}