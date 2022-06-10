vector<int> leftView(Node *root)
{
   vector<int>v;
   if(root==NULL){
       return v;
   }
   queue<Node*>q;
   q.push(root);
   while(q.size()>0){
       int p=q.size();
       for(int i=0;i<p;i++){
           Node* temp=q.front();
           q.pop();
           if(i==0){
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
