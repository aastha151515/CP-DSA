class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left=0;
        int right=left+k-1;
        double sum=0;
        for(int i=left;i<=right;i++)
        {
            sum+=nums[i];
        }
        double avg=sum/k;
        while(right<nums.size()-1)
        {
            sum-=nums[left];
            left++;
            right++;
            sum+=nums[right];
            double average=sum/k;
            avg=max(avg,average);
        }
        return avg;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna