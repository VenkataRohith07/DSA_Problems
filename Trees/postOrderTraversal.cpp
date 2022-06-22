// Recursion approach
void post(Node* root,vector<int>&v){
    if(root==NULL){
        return;
    }
    post(root->left,v);
    post(root->right,v);
    v.push_back(root->data);
}
vector <int> postOrder(Node* root)
{
  vector<int>v;
  post(root,v);
  return v;
}

//Iterative approach

class Solution{
    public:
    vector<int> postOrder(Node* root) {
        vector<int>v;
        stack<Node*>s;
        while(root!=NULL || s.size()>0){
            if(root!=NULL){
                v.push_back(root->data);
                s.push(root);
                root=root->right;
            }
            else{
                root=s.top();
                s.pop();
                root=root->left;
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};

// Here we wiil be given the root of a tree an we need to return the postorder of it!!

//Problem Statement : https://practice.geeksforgeeks.org/problems/postorder-traversal-iterative/1/
