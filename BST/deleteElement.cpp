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

//Recursive solution of delete a element in BST


//Finding just greater element of delete Key in BST
Node *getSuccessor(Node*curr){ 
    curr=curr->right;
    while(curr !=NULL && curr->left !=NULL)   //just greater element is the right child's left most child node
        curr=curr->left;
    return curr;
}

Node *delNode(Node *root,int x){
    if(root==NULL)
        return root;
    if(root->key>x)
        root->left=delNode(root->left,x);
    else if(root->key <x)
        root->right=delNode(root->right,x);
    

    else{
        if(root->left==NULL){   //This block for node only have one right child or no child
            Node *temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){   //This block for node only have one left child
            Node *temp=root->left;
            delete root;
            return temp;
        }
        else{   //This block for node have two child
            Node *succ=getSuccessor(root);
            root->key=succ->key;  //swaping the value not linking
            root->right=delNode(root->right,succ->key); //Recursively call for right part of root node of delNode function , this function call is 
        }                                               //equivalent to delete leaf node
        return root;
    }
}

//Time Complexity : O(height of binary tree)
//Aux. Space  : O(height of binary tree)
