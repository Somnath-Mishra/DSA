#include <iostream>
#include <heapFunction.h>
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
    int left(int i){  //To find of left child index
        return (2*i+1);
    }
    int right(int i){   //To find of right child index
        return (2*i+2);
    }
    int parent(int i){  //To find parent of root
        return (i-1)/2;
    }

    //Change the value of node at index i and retain its binary heap property
    void decreaseKey(int i,int x){
    arr[i]=x;
    while(i !=0 && arr[parent(i)]>arr[i]){
        swap(arr[i],arr[parent(i)]);
        i=parent(i);
    }
}
};