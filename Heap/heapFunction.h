    #include <iostream>
    #include <limits.h>
    using namespace std;
    int *arr;
    int size;
    int capacity;

    int left(int i){  //To find of left child index
        return (2*i+1);
    }
    int right(int i){   //To find of right child index
        return (2*i+2);
    }
    int parent(int i){  //To find parent of root
        return (i-1)/2;
    }
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
    void decreaseKey(int i,int x){
    arr[i]=x;
    while(i !=0 && arr[parent(i)]>arr[i]){
        swap(arr[i],arr[parent(i)]);
        i=parent(i);
    }
}
void deleteKey(int ind){
    arr[ind]=INT_MIN;
    decreaseKey(ind,INT_MIN);
    extractMin();
}
void buildHeap(){
    for(int i=(size-2)/2;i>=0;i--)
        minHeapify(i);
}
