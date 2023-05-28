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
    int left(int i){  //To find of left child index
        return (2*i+1);
    }
    int right(int i){   //To find of right child index
        return (2*i+2);
    }
    int parent(int i){  //To find parent of root
        return (i-1)/2;
    }
};