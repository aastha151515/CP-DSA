class Solution {
private:
    long long power(long long base,long long exp,long long mod){
        long long res=1;
        base%=mod;
        while(exp>0) {
            if(exp%2==1)res=(res*base)%mod;
            base=(base*base)%mod;
            exp/=2;
        }
        return res;
    }
public:
    int countGoodNumbers(long long n){
        long long MOD=1e9+7;
        long long even_slots=(n+1)/2;
        long long odd_slots=n/2;
        long long first_part=power(5,even_slots,MOD);
        long long second_part=power(4,odd_slots,MOD);
        return(first_part*second_part)%MOD;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna