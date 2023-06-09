/*
begin() , end() ,next() ,prev() ,advance()
*/


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={10,20,30,40,50};
    
    //Declaration of iterator
    vector<int>::iterator i=v.begin(); //this whole syntax can be replaced by auto i=v.begin()
    cout<<(*i)<<" ";
    //increment of iterator
    i++;
    cout<<*i<<" ";
    i=v.end();//end() point to beyond the last element in container
    //decrement of iterator
    i--;

    cout<<*i<<" ";
    i=v.begin();

    
    i=next(i);//increment iterator poisition  by 1
    
    cout<<*i<<" ";

    i=next(i,2);//increment iterator position by 2
    
    cout<<*i<<" ";
    
    i=prev(i);//decrement iterator position by 1
    
    cout<<*i<<" ";

    i=v.begin();

    advance(i,3);//iterator will go 3 position ahead
    cout<<*i<< " ";

    return 0;
}