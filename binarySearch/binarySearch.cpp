/*
i/p: arr[]={10,20,30,40,50,60} ,x=20
o/p : 1(index of element 20)\

i/p : arr[]={5,10,15,25,35} , x=20
o/p : -1(not present in array)

Algorithms:
steps : 
compute mid=[(low+high)/2]   ;;[.]=floor(x)
case 1 : arr[mid]==x
            return mid
case 2 : arr[mid]>x
            high=mid-1
case 3 : arr[mid]<x
            low=mid+1

*/
#include<iostream>
#include<algorithm>
using namespace std;

//Binary Search function
//Binary Search only applied on sorted container

int bSearch(int arr[],int n,int x){
    int low=0,high=(n-1);
    while(low<=high){
        int mid =low+((high-low)>>1); // Equivalent to (low+high)/2
        if(arr[mid]==x){
            return mid ;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}
//Time Complexity : O(logn)
//Auxiliary Space : O(1)

int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    int arr[n];
    cout<<"Enter value of elements in array which seperated by space : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int x;
    cout<<"which element you want to search in an array : ";
    cin>>x;
    cout<<bSearch(arr,n,x);
    return 0;
}