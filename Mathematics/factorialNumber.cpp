//Factorial of a number

#include<iostream>
using namespace std;
long long fact(long long n){
    if(n==0)
        return 1;
    return n*fact(n-1);
}
int main(){
    long long n;
    cout<<"Enter value of n : ";
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}