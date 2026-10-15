class Solution {
public:
    int findGCD(vector<int>& nums) {
        int l=nums[0];
        int s=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            l=max(l,nums[i]);
            s=min(s,nums[i]);
        }
        int ans=1;
        for(int i=1;i<=l;i++)
        {
            if(l%i==0 && s%i==0)
            {
                ans=max(ans,i);
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna