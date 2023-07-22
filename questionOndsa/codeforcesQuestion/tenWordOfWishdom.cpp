#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n][2];
        for(int i=0;i<n;i++){
            cin>>arr[i][0]>>arr[i][1];
        }
        int ind=-1,maxAns=0;
        for(int i=0;i<n;i++){
            if(arr[i][0]<=10){
                if(maxAns<arr[i][1]){
                    maxAns=arr[i][1];
                    ind=i+1;
                }
            }
        }
        cout<<ind<<endl;
    }
}