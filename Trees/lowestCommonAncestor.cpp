class Solution
{
    public:
   
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       if(root==NULL){
           return root;
       }
       if(root->data==n1 || root->data==n2){
           return root;
       }
       Node* x=lca(root->left,n1,n2);
       Node* y=lca(root->right,n1,n2);
       if(x!=NULL && y!=NULL){
           return root;
       }
       if(x!=NULL){
           return x;
       }
       if(y!=NULL){
           return y;
       }
       return NULL;
    }
};


// Need to find the lowest commo ancestor of nodes having values as n1 and n2.

//Problem Statment : https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1
