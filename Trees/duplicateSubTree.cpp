class Solution {
  public:
    
    string solve(Node* root,bool &ans,unordered_map<string,int>&mp){
        if(root==NULL){
            return "";
        }
        string s1=solve(root->left,ans,mp);
        string s2=solve(root->right,ans,mp);
        if(s1=="" && s2==""){
            return '$'+to_string(root->data)+'$';
        }
        string s=s1+'$'+to_string(root->data)+'$'+s2;
        if(mp.find(s)==mp.end()){
            mp[s]++;
        }
        else{
            ans=true;
        }
        return s;
    }
    int dupSub(Node *root) {
        unordered_map<string,int>mp;
        bool ans=false;
        solve(root,ans,mp);
        return ans;
    }
};

//We will be given a tree, we need to check weather a duplicate subtree of size 2 or more exixts

//Problem Statement : https://practice.geeksforgeeks.org/problems/duplicate-subtree-in-binary-tree/1
