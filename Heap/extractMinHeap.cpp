#include <iostream>
#include<limits.h>
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

     //if any violation in binary heap this function will fixed according to its property
    void minHeapify(int i){
        int lt=left(i),rt=right(i);
        int smallest=i;
        if(lt<size && arr[lt]<arr[i])
            smallest=lt;
        if(rt<size && arr[rt]<arr[smallest])
            smallest=rt;
        if(smallest !=i){
            swap(arr[i],arr[smallest]);
            minHeapify(smallest);   //Recursively call for its child as minHeapify
        }
    }


    //This function will remove min element of heap and remaining heap will retain its own property 
    //And return min element in heap
    int extractMin(){
        if(size==0)
            return INT_MAX;
        if(size==1){
            size--;
            return arr[0];
        }
        swap(arr[0],arr[size-1]);
        size--;
        minHeapify(0);
        return arr[size];
    }
};