// Using Recursion
class Solution {
  public:
    
    void solve(Node* root,vector<int>&v){
        if(root==NULL){
            return;
        }
        solve(root->left,v);
        v.push_back(root->data);
        solve(root->right,v);
    }
    vector<int> inOrder(Node* root) {
        vector<int>v;
        solve(root,v);
        return v;
    }
};

//Iterative Method

class Solution {
public:
    vector<int> inOrder(Node* root)
    {
        vector<int>v;
        stack<Node*>s;
        while(root!=NULL || s.size()>0){
            if(root!=NULL){
                s.push(root);
                root=root->left;
            }
            else{
                root=s.top();
                s.pop();
                v.push_back(root->data);
                root=root->right;
            }
        }
        return v;
    }
};

//We will be given the root node of the tree and we are required to find the Inorder traversal of it.

// Problem Statement : https://practice.geeksforgeeks.org/problems/inorder-traversal-iterative/1/#
