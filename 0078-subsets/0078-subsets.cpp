class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int total=1<<n;
        vector<vector<int>> subsets;

        for(int mask=0;mask<total;mask++)
        {
            vector<int> sub;
            for(int j=0;j<n;j++)
            {
                if((mask&(1<<j))!=0)
                {
                    sub.push_back(nums[j]);
                }
            }
            subsets.push_back(sub);
        }
        return subsets;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna