#include<iostream>
#include<vector>
using namespace std;

vector<int> listOfSmallerElement(vector<int>arr,int key){
    vector<int>ans;
    for(auto it=arr.begin();it !=arr.end();it++){
        if(*it<key)
            ans.push_back(*it);
        
    }
    return ans;
}

int main(){
    vector<int>v{2,5,8,9,10};
    vector<int>ans;
    int key=7;
    ans=listOfSmallerElement(v,key);
    for(auto it =ans.begin();it !=ans.end();it++){
        cout<<(*it)<<" ";
    }
    return 0;
}