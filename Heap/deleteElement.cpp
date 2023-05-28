#include <iostream>
#include<heapFunction.h>
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


// To delete a element and retain it own property
void deleteKey(int ind){
    arr[ind]=INT_MIN;
    decreaseKey(ind,INT_MIN);
    extractMin();
}
};