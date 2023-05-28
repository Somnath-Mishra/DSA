#include <iostream>
using namespace std;


//Implementation of Binary Search Tree structure
struct Node{
    int key;
    Node *left,*right;
    Node(int x){
        key=x;
        left=right=NULL;
    }
};


//This function is finding the floor of x which is equal to smaller or equal to x

Node *floor(Node *root,int x){
    Node *res=NULL;
    while(root!=NULL){
        if(root->key==x)
            return root;
        else if(root->key>x)
            root=root->left;
        else{
            res=root;   //Storing root as a tempurary ans of floor(x)
            root=root->right; //Again search for finding right side to find more optimized ans
        }
    }
    return res;
}
//Time Complexity : O(height of BST)
//Auxiliary Space : O(1)