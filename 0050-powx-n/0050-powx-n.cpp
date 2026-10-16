class Solution {
public:
    double myPow(double x, int n) {
        long double res=1;
        long long p=n;
        if(n<0)
        {
            p=-p;
        }
        long double b=x;
        while(p>0)
        {
            if(p&1)
            {
                res=res*b;
            }
            b*=b;
            p>>=1;
        }
        if(n<0)
        {
            return (double)1/res;
        }
        return (double)res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna