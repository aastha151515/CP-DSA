class Solution {
public:
    int trailingZeroes(int n) {
        int ans=0;
        while(n>=5)
        {
            n=n/5;
            ans+=n;
        }
        return ans;
    } 
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna