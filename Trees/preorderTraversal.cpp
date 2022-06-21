// Recursion Approach
void pre(Node* root,vector<int>&v){
   if(root==NULL){
      return;
  }
  v.push_back(root->data);
  pre(root->left,v);
  pre(root->right,v);
  return; 
}
vector <int> preorder(Node* root)
{
   vector<int>v;
   pre(root,v);
   return v;
}

// Iterative Approach

class Solution{
    public:
    vector<int> preOrder(Node* root)
    {
        stack<Node*>s;
        vector<int>v;
        while(root!=NULL || s.size()>0){
            if(root!=NULL){
                v.push_back(root->data);
                s.push(root);
                root=root->left;
            }
            else{
                root=s.top();
                s.pop();
                root=root->right;
            }
        }
        return v;
    }
};

// Given the root node of a tree, we need to return the preorder traversal of the tree.

// Problem Statement :https://practice.geeksforgeeks.org/problems/preorder-traversal-iterative/0/
