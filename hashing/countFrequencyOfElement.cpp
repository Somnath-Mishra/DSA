#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;


vector<int> countFreq(int arr[], int n){
    unordered_map<int ,int >h;
    vector<int>ans;
    for(int x : arr)
        h[x]++;
    
    for (auto i = h.begin(); i != h.end(); i++){
        if(i->second >=n){
            ans.push_back(i->first);
        }
    }
    return ans;
}