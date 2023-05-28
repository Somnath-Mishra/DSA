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

//Recursive Solution of search element in BST

bool recSearch(Node *root,int x){
    if(root==NULL)
        return false;
    else if(root->key==x){
        return true;
    }
    else if(root->key>x)
        return recSearch(root->left,x);
    else
        return recSearch(root->right,x);
}
//Time Complexity : O(height of binary tree)
//Auxiliary Space : O(height of binary tree)


//iterative Solution of Search element in BST

bool itrSearch(Node *root,int x){
    while(root !=NULL){
        if(root->key==x)
            return true;
        else if(root->key<x)
            root=root->right;
        else
            root=root->left;
    }
    return false;
}
//Time Complexity : O(1)
//No Auxiliary Space required
//Better than recursive solution 
