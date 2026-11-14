class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int ans=0;
        sort(intervals.begin(),intervals.end());
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<intervals[i-1][1])
            {
                ans++;
                intervals[i][1]=min(intervals[i-1][1],intervals[i][1]);
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna