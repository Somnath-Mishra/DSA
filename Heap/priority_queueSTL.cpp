#include <iostream>
#include<queue>
using namespace std;
/*
int main(){
    
    //priority_queue<int>pq; //decreasing order store the element
    //priority_queue<int ,vector<int>,greater<int>>pq; //Increasing order store element
    
    // pq.push(10);
    // pq.push(15);
    // pq.push(5);
    cout<<pq.size()<<" ";
    cout<<pq.top()<<" ";
    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}
*/
/*
int main(){
    int arr[]={20,23,9};
    priority_queue<int >pq(arr,arr+3);
    cout<<pq.size()<<" ";
    cout<<pq.top()<<" ";
    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}
*/
/*
int main(){
    int arr[]={10,15,5};
    for(int i=0;i<3;i++){
        arr[i]=-arr[i];
    }
    priority_queue<int>pq(arr,arr+3);
    while(pq.empty()==false){
        cout<<-pq.top()<<" ";
        pq.pop();
    }
    return 0;
}
*/

struct Person{
    int age;
    float ht;
    Person(int a,float h){
        age =a;
        ht=h;
    }

};
struct myCmp{
    bool operator()(Person const &p1,Person const &p2){
        p1.ht<p2.ht;
    }
};
int main(){
    priority_queue<Person ,vector<Person>,myCmp>pq;
    return 0;
}