#include <vector>
using namespace std;

int min(vector<int> list){
    int minium_number = list[0];
    for(int i = 0 ; i < list.size();i++){
        if(list[i] < minium_number){
            minium_number = list[i];
        }
    }
    return minium_number;
}

int max(vector<int> list){
    
    int max_number = list[0];
    for(int i = 0 ; i < list.size();i++){
        if(list[i] > max_number){
            max_number = list[i];
        }
    }
    return max_number;
}