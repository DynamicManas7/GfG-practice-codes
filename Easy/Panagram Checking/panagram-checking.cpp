//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram(string s) {
        vector<bool> check(26,0);
        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];
            if ('A' <= ch && ch <= 'Z')
                check[ch - 'A'] = true; 
            else if ('a' <= ch && ch <= 'z')
                check[ch - 'a'] = true;
        }
        for (int i = 0; i < 26; i++) {
            if (!check[i]) return false;
        }
        return true;
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends