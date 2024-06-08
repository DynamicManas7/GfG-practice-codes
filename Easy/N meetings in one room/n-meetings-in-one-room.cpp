//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    struct Meeting {
        int start;
        int end;
        int pos;
    };

    static bool cmp(Meeting a, Meeting b) {
        return a.end < b.end;
    }
    int maxMeetings(int start[], int end[], int n) {
        // Array to hold meeting information
        vector<Meeting> meetings(n);
        for (int i = 0; i < n; ++i) {
            meetings[i].start = start[i];
            meetings[i].end = end[i];
            meetings[i].pos = i + 1; // Meeting positions start from 1
        }
        // Sorting meetings based on their end times
        sort(meetings.begin(), meetings.end(), cmp);
        // Count of meetings we can attend
        int count = 1;
        int freeTime = meetings[0].end;
        // Iterating over remaining meetings
        for (int i = 1; i < n; ++i) {
            if (meetings[i].start > freeTime) {
                ++count;
                freeTime = meetings[i].end;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends