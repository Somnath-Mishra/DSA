/*
i/p : arr[]={10,15,20,20,40,40} , x=20
o/p : 3

i/p : arr[]={5,8,8,10,10} , x=10
o/p : 4

i/p : arr[]={8,10,10,12} , x=7
o/p : -1

*/
#include<iostream>
using namespace std;

//Recursive Binary Search Solution
int lastOccRecursive(int arr[],int low,int high,int x,int n){
    if(low>high){
        return-1;
    }
    int mid=low+((high-low)>>1);
    if(arr[mid]>x){
        return lastOccRecursive(arr,low,mid-1,x,n);
    }
    else if(arr[mid]<x){
        return lastOccRecursive(arr,mid+1,high,x,n);
    }
    else{
        if(mid==(n-1) || arr[mid] !=arr[mid+1]){
            return mid;
        }
        else
            return lastOccRecursive(arr,mid+1,high,x,n);
    }
}

//Iterative Binary Search Solution 
 
int lastOccIterative(int arr[],int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid =low+((high-low)>>1);
        if(arr[mid]<x)
            low=mid+1;
        else if(arr[mid]>x)
            high=mid-1;
        else{
            if(mid==(n-1) || arr[mid] !=arr[mid+1]){
                return mid; 
            }
            else
                low=mid+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter number of element : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array which seperated by space : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int x;
    cout<<"Enter the number which you want the last occurance of index : ";
    cin>>x;
    int ans1=lastOccRecursive(arr,0,n-1,x,n);
    int ans2=lastOccIterative(arr,n,x);
    cout<<ans1<<" ";
    cout<<ans2<<" ";
    return 0;
}