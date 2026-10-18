class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set <string> f1;
        unordered_set <string> f2;
        for(int i=0;i<paths.size();i++)
        {
            f1.insert(paths[i][0]);
            f2.insert(paths[i][1]);
        }
        for(int i=0;i<paths.size();i++)
        {
            for(int j=0;j<paths[0].size();j++)
            {
                if(!f1.count(paths[i][j]) && f2.count(paths[i][j]))
                {
                    return paths[i][j];
                }
            }
        }
        return "";
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna