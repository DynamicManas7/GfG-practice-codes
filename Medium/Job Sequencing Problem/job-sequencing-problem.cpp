//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution {
public:
    // Comparator function to sort jobs according to profit in descending order
    static bool comp(Job a, Job b) {
        return a.profit > b.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) { 
        // Sorting the jobs according to their profits in descending order
        sort(arr,arr+ n,comp);
        // Finding the maximum deadline to define the size of the schedule array
        int maxDeadline = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i].dead > maxDeadline) {
                maxDeadline = arr[i].dead;
            }
        }
        // Creating a schedule array to keep track of free time slots
        vector<int> slot(maxDeadline + 1, -1);
        // Variables to store the count of jobs and total profit
        int countJobs = 0;
        int totalProfit = 0;
        // Iterating through all jobs
        for (int i = 0; i < n; i++) {
            // Finding a free slot for this job (starting from the last possible slot)
            for (int j = arr[i].dead; j > 0; j--) {
                if (slot[j] == -1) {
                    slot[j] = arr[i].id;
                    countJobs++;
                    totalProfit += arr[i].profit;
                    break;
                }
            }
        }
        return {countJobs, totalProfit};
    } 
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends