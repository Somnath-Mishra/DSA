#include <iostream>
#include<list>
using namespace std;

//Implementation of Chaining in Hashing data structure

//We are using hash function as : hash(key)=key%(size of hash table)
struct MyHash{
    int BUCKET;
    list<int>*table; //Using linked list
    MyHash(int b){
        BUCKET=b;
        table=new list<int>[b];
    }

    //insert function to insert a key in perfect position 

    void insert(int key){
        int i=key%BUCKET;
        table[i].push_back(key);
    }

    // To remove a key present in hash table
    void remove(int key){
        int i=key%BUCKET;
        table[i].remove(key);
    }

    //To search a key in hash table present or not
    bool search(int key){
        int i=key%BUCKET;
        for(auto x:table[i]){
            if(x==key)
                return true;
            return false;
        }
    }
};

