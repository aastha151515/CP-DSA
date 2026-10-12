class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_map<char,int>f={{'a',0},{'e',0},{'i',0},{'o',0},{'u',0}};
        int left=0;
        int right=k-left-1;
        for(int i=left;i<=right;i++)
        {
            if(f.find(s[i])!=f.end())
            {
                f[s[i]]++;
            }
        }
        int ans=0;
        for(auto i:f)
        {
            ans+=i.second;
        }
        int sum=ans;
        while(right<s.size()-1)
        {
            if(f.find(s[left])!=f.end())
            {
                f[s[left]]--;
                sum--;
            }
            left++;
            right++;
            if(f.find(s[right])!=f.end())
            {
                f[s[right]]++;
                sum++;
            }
            ans=max(ans,sum);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna