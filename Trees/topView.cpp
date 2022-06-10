vector<int> topView(Node *root)
    {
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(q.size()>0){
            Node* temp=q.front().first;
            int x=q.front().second;
            q.pop();
            if(mp.find(x)==mp.end()){
                mp[x]=temp->data;
            }
            if(temp->left!=NULL){
                q.push({temp->left,x-1});
            }
            if(temp->right!=NULL){
                q.push({temp->right,x+1});
            }
        }
        vector<int>v;
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            v.push_back(itr->second);
        }
        return v;
    }
