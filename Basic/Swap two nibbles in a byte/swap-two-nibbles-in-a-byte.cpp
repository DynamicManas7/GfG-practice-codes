//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int swapNibbles(int n) {
        int right = n, left = n;
        right >>= 4;
        left = (left<<4) - (right<<8);
        return left + right;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.swapNibbles(n) << endl;
    }
    return 0;
}
// } Driver Code Ends