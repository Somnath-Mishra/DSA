//Palindrome of a given number

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of number : ";
    cin>>n;
    int revNum=0,temp=n;
    while(temp>0){
        revNum=revNum*10+(temp%10);
        temp/=10;
    }
    if(revNum==n)
        cout<<"True";
    else
        cout<<"False";
    return 0;
}