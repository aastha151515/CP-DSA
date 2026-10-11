class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(),1);
        for(int i=1;i<nums.size();i++)
        {
            res[i]=res[i-1]*nums[i-1];
        }
        int suff=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            res[i]*=suff;
            suff*=nums[i];
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna