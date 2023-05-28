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
    int right(int i){    //To find of right child index
        return (2*i+2);
    }
    int parent(int i){  //To find parent index of root
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
};