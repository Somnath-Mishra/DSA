/*
  internally use dynamically allocated array only
  if current allocated space is full ,then do the following 
    -(a) Create a  large space of double size
    -(b) Copy elements old space to new space 
    -(c) Free old Space


*/

//insert() function's time complexity is (O(1)+O(1)+.....upto n term+O(n+1))/(n+1) = (O(n)+O(n))/(n+1) = O(1)

#include<iostream>
#include<vector>
using namespace std;

//Initial capacity of vector depend on compiler to compiler

int main(){
    vector<int>v;
    cout<<v.capacity()<<" ";//Here initial capacity of vector is 0
    v.push_back(10);
    cout<<v.capacity()<<" ";// capacity=1
    v.push_back(20);
    cout<<v.capacity()<<" ";//capacity=(2*1)=2
    v.push_back(30);
    cout<<v.capacity()<<" ";//capacity=(2*2)=4
    v.push_back(40);
    cout<<v.capacity()<<" ";//capacity=4
    v.push_back(50);
    cout<<v.capacity()<<" ";//capacity=(2*4)=8
    return 0;
}