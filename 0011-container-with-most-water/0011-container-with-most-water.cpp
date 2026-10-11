class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_vol=0;
        int left=0;
        int right=height.size()-1;
        while(left<right)
        {
            int width=right-left;
            int h=min(height[left],height[right]);
            int vol=width*h;
            max_vol=max(max_vol,vol);
            if(height[left]<height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return max_vol;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna