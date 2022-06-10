vector<int> rightView(Node *root)
    {
       vector<int>v;
       queue<Node*>q;
       if(root==NULL){
           return v;
       }
       q.push(root);
       while(q.size()>0){
           int p=q.size();
           for(int i=0;i<p;i++){
               Node* temp=q.front();
               q.pop();
               if(i==p-1){
                  v.push_back(temp->data); 
               }
               if(temp->left!=NULL){
                   q.push(temp->left);
               }
               if(temp->right!=NULL){
                   q.push(temp->right);
               }
           }
       }
       return v;
    }
