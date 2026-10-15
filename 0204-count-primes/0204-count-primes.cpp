class Solution {
public:
    int countPrimes(int n) {
        if(n<=2)
        {
            return 0;
        }
        vector<bool> num(n+1,true);
        num[0]=false;
        num[1]=false;
        for(int i=0;i*i<=n;i++)
        {
            if(num[i])
            {
                for(int j=i*i;j<=n;j+=i)
                {
                    num[j]=false;
                }
            }
        }
        int ans=0;
        for(int i=2;i<n;i++)
        {
            if(num[i])
            {
                ans++;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna