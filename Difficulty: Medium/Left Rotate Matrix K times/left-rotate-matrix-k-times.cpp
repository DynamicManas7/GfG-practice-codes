//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat)
    {   int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> v(n,vector<int>(m));
        
        k = k % m;
        int  I = 0;
        for(int i=0;i<n;i++)
        {
            int J =0;
            for(int j = k ;j<m;j++)
            {
                v[I][J]=mat[i][j];
                J++;
            }
            for(int j = 0 ;j<k;j++)
            {
                v[I][J]=mat[i][j];
                J++;
            }
            
            I++;
        }
        return v;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        Solution ob;
        vector<vector<int>> ans = ob.rotateMatrix(k, mat);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
}

// } Driver Code Ends