//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    pair<long long, long long> getMinMax(long long a[], int n) {
        // code here

        int max=INT_MIN;
        for(int i=0;i<n;i++){
            if(a[i]>max)
            max=a[i];
        }
        int MIN=INT_MAX;
        for(int i=0;i<n;i++){
            if(a[i]<MIN)
            MIN=a[i];
        }    
        return {MIN,max};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        
        Solution ob;
        pair<long long, long long> pp = ob.getMinMax(a, n);
        
        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends