/*
i/p : arr[]={0,0,0,1,1,1,1}
o/p : 4

i/p : arr[]={0,0,0,0}
o/p : 0

i/p : arr[]={1,1,1,1}
o/p : 5
*/
#include<iostream>
using namespace std;

int countOnes(int arr[],int n){
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+((high-low)>>1);
        if(arr[mid]==0){
            low=mid+1;
        }
        else{
            if(mid==0||arr[mid-1]!=arr[mid]){
                return n-mid;
            }
            else
                high=mid-1;
        }
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    int arr[n];
    cout<<"Enter value of element of array which is seperated by space : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=countOnes(arr,n);
    cout<<ans;
    return 0;
}