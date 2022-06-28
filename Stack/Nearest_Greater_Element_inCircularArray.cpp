class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& v) {
        int n=v.size();
        for(int i=0;i<n;i++){
            v.push_back(v[i]);
        }
        stack<int>s;
        n=v.size();
        vector<int>ans(n,-1);
        for(int i=n-1;i>=0;i--){
            if(s.size()==0){
                s.push(v[i]);
            }
            else if(s.top()>v[i]){
                ans[i]=s.top();
                s.push(v[i]);
            }
            else{
                while(s.size()>0 && s.top()<=v[i]){
                    s.pop();
                }
                if(s.size()==0){
                 s.push(v[i]);
                }
               else if(s.top()>v[i]){
                 ans[i]=s.top();
                 s.push(v[i]);
                }
            }
        }
        n/=2;
        while(ans.size()>n)ans.pop_back();
        
        return ans;
    }
};

// problem statement : https://leetcode.com/problems/next-greater-element-ii/

// Here we need to find the next greater element for every element in the array.
