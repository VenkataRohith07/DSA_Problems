class Solution {
public:
    int dp[1000][1000];
    int solve(int i,int j,string &s1,string &s2){
        if(i<0 || j<0){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s1[i]==s2[j]){
            return dp[i][j]=1+solve(i-1,j-1,s1,s2);
        }
        else{
            return dp[i][j]=max(solve(i-1,j,s1,s2),solve(i,j-1,s1,s2));
        }
    }
    int longestCommonSubsequence(string s1, string s2) {
        int n1=s1.size();
        int n2=s2.size();
        memset(dp,-1,sizeof(dp));
        int ans=solve(n1-1,n2-1,s1,s2);
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        return ans;
    }
};

//We will be given two strings and we need to find the length of the longest common subsequence

// Problem Statement : https://leetcode.com/problems/longest-common-subsequence/
