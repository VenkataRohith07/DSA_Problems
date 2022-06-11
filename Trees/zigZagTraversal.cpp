class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	vector<int>v;
    	if(root==NULL){
    	    return v;
    	}
    	queue<Node*>q;
    	q.push(root);
    	int flag=0;
    	while(q.size()>0){
    	    int p=q.size();
    	    vector<int>v1;
    	    while(p--){
    	        Node* temp=q.front();
    	        q.pop();
    	        v1.push_back(temp->data);
    	        if(temp->left!=NULL){
    	            q.push(temp->left);
    	        }
    	        if(temp->right!=NULL){
    	            q.push(temp->right);
    	        }
    	    }
    	    if(flag==1){
    	        reverse(v1.begin(),v1.end());
    	    }
    	    flag^=1;
    	    for(int i=0;i<v1.size();i++){
    	        v.push_back(v1[i]);
    	    }
    	}
    	return v;
    }
};

// que link : https://practice.geeksforgeeks.org/problems/zigzag-tree-traversal/1
