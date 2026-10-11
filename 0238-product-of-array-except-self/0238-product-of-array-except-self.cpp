class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums.size(),1);
        vector<int> suff(nums.size(),1);
        for(int i=1;i<nums.size();i++)
        {
            pre[i]=pre[i-1]*nums[i-1];
        }
        for(int i=nums.size()-2;i>=0;i--)
        {
            suff[i]=suff[i+1]*nums[i+1];
        }
        vector<int> res(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            res[i]=pre[i]*suff[i];
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna