class LRUCache {
public:
    list<pair<int,int>>li;
    int sz=0;
    unordered_map<int,list<pair<int,int>>::iterator>mp;
    LRUCache(int capacity) {
        sz=capacity;
    }
    
    int get(int key) {
        if(mp.find(key)==mp.end()){
            return -1;
        }
        auto itr=mp[key];
        int x=itr->second;
        li.erase(itr);
        li.insert(li.begin(),{key,x});
        mp[key]=li.begin();
        return x;
    }
    
    void put(int key, int val) {
        if(mp.find(key)!=mp.end()){
            li.erase(mp[key]);
            li.insert(li.begin(),{key,val});
            mp[key]=li.begin();
            return;
        }
        int x=li.back().first;
        if(li.size()==sz){
            li.pop_back();
            mp.erase(x);
        }
        li.insert(li.begin(),{key,val});
        mp[key]=li.begin();
    }
};


// Problem statement : https://leetcode.com/problems/lru-cache/
