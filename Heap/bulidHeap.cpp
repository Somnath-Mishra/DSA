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

//Build binary heap from an random array of vector
void buildHeap(){
    for(int i=(size-2)/2;i>=0;i--)
        minHeapify(i);
}
};