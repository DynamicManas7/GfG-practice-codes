//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string binaryNextNumber(string s) {
        int n = s.size(), i = n-1;
        while(i >= 0 && s[i] == '1') s[i--] = '0';
        if(i == -1) s = "1" + s;
        else s[i] = '1';
        int f = 0;
        while(s[f] == '0') f++;
        return s.substr(f);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.binaryNextNumber(s);
        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends