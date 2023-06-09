/*
i/p : arr[]={1,10,10,10,20,20,40} , x=20
o/p : 4

i/p : arr[]={10,20,30} , x=15
o/p : -1

i/p : arr[]={15,15,15} , x=15
o/p : 0

*/



#include<iostream>
using namespace std;

//Naive Solution
int firstOccuranceNaive(int arr[],int n, int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x)
            return i;
        
    }
    return -1;
}
//Time Complexity : O(n)
//Auxiliary Space : O(1)

//Recursive Binary Search Solution
int firstOccurance(int arr[],int low,int high,int x){
    if(low>high)
        return -1;
    int mid=low+((high-low)>>1);
    if(x>arr[mid])
        return firstOccurance(arr,mid+1,high,x);
    else if(x<arr[mid])
        return firstOccurance(arr,low,mid-1,x);
    else{
        if(mid==0||arr[mid-1]!=arr[mid])
            return mid;
        else
            return firstOccurance(arr,low,mid-1,x);
    }
}

//Iterative Binary Search Solution
int firstOccurance(int arr[],int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+((high-low)>>1);
        if(arr[mid]>x)
            high=mid-1;
        else if(arr[mid]<x)
            low=mid+1;
        else{
            if(mid==0||arr[mid-1]!=arr[mid]){
                return mid;
            }
            else
                high=mid-1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter value of number of element : ";
    cin>>n;
    int arr[n];
    cout<<"Enter value of elements of array which seperated by space : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the value of x which you want first occurance : ";
    cin>>x;
    int ans1=firstOccuranceNaive(arr,n,x);
    int ans2=firstOccurance(arr,0,n-1,x);
    int ans3=firstOccurance(arr,n,x);
    cout<<ans1<<" ";
    cout<<ans2<<" ";
    cout<<ans3;
    return 0;
}
