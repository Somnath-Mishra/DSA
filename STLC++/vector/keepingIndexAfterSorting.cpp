/*
input :     arr[]={10 ,40 ,30, 9 , 80}
  index:            0   1   2   3   4
output :    9   3
            10  0
            30  2
            40  1
            80  4
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printingIndexAfterSorting(int arr[],int n){
    vector<pair<int,int>>ans;
    for(int i=0;i<n;i++){
        ans.push_back({arr[i],i});//make_pair(arr[i],i);
    }
    sort(ans.begin(),ans.end());
    for(auto it=ans.begin();it!=ans.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }

}
int main(){
    int n;
    cout<<"Enter value of number of element in an array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter element of array by space seperated : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printingIndexAfterSorting(arr,n);
    return 0;
}