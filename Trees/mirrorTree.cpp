class Solution {
  public:
    
    void mirror(Node* node) {
       if(node==NULL){
           return ;
       }
       if(node->left==NULL && node->right==NULL){
           return ;
       }
       Node* temp1=node->left;
       Node* temp2=node->right;
       mirror(temp2);
       node->left=temp2;
       mirror(temp1);
       node->right=temp1;
       return;
    }
};

// We will be given a tree, we need to convert it to it's mirror.

// Problem Statement: https://practice.geeksforgeeks.org/problems/mirror-tree/1#
