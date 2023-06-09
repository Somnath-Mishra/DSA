#include<iostream>
#include<vector>
#include<list>
using namespace std;
class MyDataStructure{
    private:
       list<int >l;
    public:
        void insert(int x){
            l.push_back(x);
        }
        void replace(int x, vector<int>seq){
            auto it =l.begin();
            while(*it !=x){
                it++;
            }
            it=l.erase(it);
            for(int i=seq.size()-1;i>=0;i--){
               it=l.insert(it,seq[i]);
            }
        }
        void print(){
            auto it=l.begin();
            while(it !=l.end()){
                cout<<(*it)<<" ";
                it++;
            }
        }
};

int main(){
    vector<int>v{20,30,40};
    MyDataStructure myObj;
    myObj.insert(3);
    myObj.insert(10);
    myObj.insert(2);
    myObj.insert(10);
    myObj.print();
    cout<<endl;
    myObj.replace(10,v);
    myObj.print();
    return 0;
}