#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;


vector<int> countFreq(int arr[], int n){
    unordered_map<int ,int >h;
    vector<int>ans;
    for(int i=0;i<n;i++)
        h[arr[i]]++;
    
    for (auto i = h.begin(); i != h.end(); i++){
        if(i->second >=n){
            ans.push_back(i->first);
        }
    }
    return ans;
}


int main(){
    int n;
    cout<<"Enter number of element : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array element which seperated by space : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans=countFreq(arr,n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;


}