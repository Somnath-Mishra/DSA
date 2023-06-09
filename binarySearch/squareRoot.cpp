/*
i/p : 4
o/p : 2

i/p : 25
o/p : 5

i/p : 14
o/p : 3
*/
#include<iostream>
using namespace std;


//Naive Solution 
int sqRootFloorNaive(int x){
    int i=1;
    while(i*i<=x){
        i++;
    }
    return i-1;
}
//Time complexity : Theta(root(x))

//Efficient Solution 
int sqRootFloor(int x){
    int low=1,high=x,ans=-1;
    while(low<=high){
        int mid=low+((high-low)>>1);
        int mSq=mid*mid;
        if(mSq==x){
            return mid ;
        }
        else if(mSq>x){
            high=mid-1;
        }
        else{
            low=mid+1;
            ans=mid;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int ans=sqRootFloorNaive(n);
    int ans2=sqRootFloor(n);
    cout<<ans<<" "<<ans2<<" ";
    return 0;
}