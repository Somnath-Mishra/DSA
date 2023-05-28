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

//Recursive solution of insert element in BST

Node *recInsert(Node*root,int x){
    if(root==NULL)
        return new Node(x); //Creating a node till now this node is not linked to BST
    else if(root->key<x)
        root->right=recInsert(root->right,x); // Making link of new node which created above
    else if(root->key>x)
        root->left=recInsert(root->left,x);  // Making link of new node which created above
    return root;
}
//Time Complexity : O(height of binary tree)
//Auxilary Space : O(height of binary tree)



//Iterative solution of insert element in BST
Node *itrInsert(Node *root,int x){
    Node *temp=new Node(x);  //Creating a new node with value x
    Node *parent=NULL,*curr=root; //curr's parent is parent node
    while(curr !=NULL){  //this loop is finding correct position for insert the element
        parent =curr;
        if(curr->key>x)
            curr=curr->left;
        else if(curr->key<x)
            curr=curr->right;
        else    
            return root;
    }
    if(parent==NULL)
        return temp;
    if(parent->key>x)
        parent->left=temp; //Linking new created node with correct position
    else
        parent->right=temp; //Linking new created node with correct position
    return root;
}
//Time Complexity : O(height of binary tree)
//Auxiliary Space : O(1)
//This iterative solution is better than recursive one 
