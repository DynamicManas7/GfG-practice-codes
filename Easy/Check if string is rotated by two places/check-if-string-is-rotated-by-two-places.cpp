//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


#include <string>
#include <algorithm>

class Solution {
public:
    bool isRotated(std::string str1, std::string str2) {
        if (str1.size() != str2.size())
            return false;

        std::string clockwise = str1;
        std::string anticlockwise = str1;

        // Rotate clockwise
        std::rotate(clockwise.begin(), clockwise.begin() + 2, clockwise.end());
        std::rotate(clockwise.begin() + 2, clockwise.end(), clockwise.end());

        if (clockwise == str2)
            return true;

        // Rotate anti-clockwise
        std::rotate(anticlockwise.rbegin(), anticlockwise.rbegin() + 2, anticlockwise.rend());
        std::rotate(anticlockwise.rbegin() + 2, anticlockwise.rend(), anticlockwise.rend());

        if (anticlockwise == str2)
            return true;

        return false;
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends