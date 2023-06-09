#include<iostream>
#include<algorithm>
using namespace std;

//Recursive binary Seach 

int bSearch(int arr[],int low ,int high,int x){
    if(low>high)
        return -1;
    int mid=low+((high-low)>>1);//(a>>b) equivalent to x/(2^y)
    if(arr[mid]==x)
        return mid;
    else if(arr[mid]>x)
        return bSearch(arr,low,mid-1,x);
    else
        return bSearch(arr,mid+1,high,x);
}
//Time Complexity : O(logn)
//Auxiliary Space : O(logn)

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
    cout<<bSearch(arr,0,n-1,x);
    return 0;
}