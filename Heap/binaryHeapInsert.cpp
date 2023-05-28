#include <iostream>
using namespace std;


class MinHeap{
    int *arr;
    int size;
    int capacity;
    MinHeap(int c){
        arr=new int[c];
        size=0;
        capacity=c;
    }
    int left(int i){    //To find of left child index
        return (2*i+1);
    }
    int right(int i){   //To find of right child index
        return (2*i+2);
    }
    int parent(int i){  //To find parent index of root
        return (i-1)/2;
    }

    //Insert a new element retain property of binary minHeap
    void insert(int x){
        if(size==capacity) 
            return;
        size++;
        arr[size-1]=x;  //firstly new element insert at the end of binary tree
        for(int i=size-1;((i !=0 )&& (arr[parent(i)]>arr[i]));){    //Here new element go to its correct position
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }
};