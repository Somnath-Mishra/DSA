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


//Finding ceil of x which is equal to just greater or equal to x

Node *ceil(Node *root,int x){
    Node *res=NULL;
    while(root !=NULL){
        if(root->key==x)
            return root;
        else if(root->key<x){
            root=root->right;
        }
        else{
            res=root;   //Storing root as tempurary value of ceil(x)
            root=root->left;
        }
    }
    return res;
}
//Time Complexity : O(height of binary tree)
//Aux. Space :O(1)
