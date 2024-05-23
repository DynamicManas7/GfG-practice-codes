//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public: vector<vector<int>>dp;
    int solve(string &s,int i,int j){
        
       if(i>=j)return 0;
       
       if(s[i]==s[j]){
           int a=solve(s,i+1,j-1);
           return dp[i][j]= a;
       }
       if(dp[i][j]!=-1)return dp[i][j];
       
       int a=1+solve(s,i+1,j);
       int b=1+solve(s,i,j-1);
  
       return dp[i][j]=min(a,b);
    }
    int kPalindrome(string str, int n, int k)
    {
        dp=vector<vector<int>>(n,vector<int>(n,-1));
        
        solve(str,0,n-1);
        if(dp[0][n-1]>k)return 0;
        return 1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.kPalindrome(str, n, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends