
//Trainling Zeros in Factorial of a given number
/*
i/p: n=5  o/p: 1
i/p : n=10 o/p : 2
i/p: n=100 o/p: 24
*/

#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int countTrailingZeros(int n){
    int res =0;
    for(int i=5;i<=n;i=i*5){
        res=res+(n/i);

    }
    return res;
}
// Time Complexity : theta(logn)
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<countTrailingZeros(n);
    return 0;
}