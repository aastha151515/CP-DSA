class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> f;
        for(int i=0;i<strs.size();i++)
        {
            string s=strs[i];
            sort(s.begin(),s.end());
            f[s].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for(auto i:f)
        {
            res.push_back(i.second);
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna