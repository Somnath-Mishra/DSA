/*
There is two vector given for several student roll number and marks obtain
your task is to sort the vector according to marks and print roll number and marks
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool myCmp(pair<int,int>p1,pair<int,int>p2){
    return p1.second>p2.second;
}
void printSortedByMarks(int roll[],int mark[],int n){
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        v.push_back({roll[i],mark[i]});
    }
    sort(v.begin(),v.end(),myCmp);
    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}

int main(){
   // vector<vector<int>>student{{100,50},{101,90},{102,60},{103,70},{104,80},{105,100}};
   // int n=6;
    int roll[6]{100,101,102,103,104,105};
    int mark[6]{20,40,90,100,56,39};
    printSortedByMarks(roll,mark,6);
    
    return 0;
    
}