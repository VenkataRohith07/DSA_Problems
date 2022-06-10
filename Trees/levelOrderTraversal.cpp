 vector<int> levelOrder(Node* node)
    {
      queue<Node*>q;
      vector<int>v;
      if(node==NULL){
          return v;
      }
      q.push(node);
      while(q.size()>0){
          Node* temp=q.front();
          q.pop();
          v.push_back(temp->data);
          if(temp->left!=NULL){
              q.push(temp->left);
          }
          if(temp->right!=NULL){
              q.push(temp->right);
          }
      }
      return v;
     }
