class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        unordered_set<int> n;
        for(auto i: nums)
        {
            n.insert(i);
        }

        int maxi=0;
        int c=0;
        for(auto i:n)
        {
            if(n.find(i-1)==n.end())
            {
                int curr=i;
                c=0;

                while(n.find(curr)!=n.end())
                {
                    c++;
                    curr++;
                }
                maxi=max(maxi,c);
            }
        }
        return maxi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna