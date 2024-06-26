//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
     vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        long long currentSum = arr[0];
        int left = 0;
        int right = 0;
        vector<int>ans;
        while(left<n && right<n){
            if(currentSum==s){
                    return {left+1, right+1};
            }
            else if(currentSum > s && left+1 <= right) 
                currentSum -= arr[left++];
                
            else 
                currentSum += arr[++right];
        }
        return {-1};
        
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends