class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
        {
            return false;
        }
        int arr[26]={0};
        for(int i=0;i<s1.size();i++)
        {
            arr[s1[i]-'a']++;
        }

        int left=0;
        int right=s1.size()-1;
        int check[26]={0};
        for(int i=left;i<=right;i++)
        {
            check[s2[i]-'a']++;
        }
        bool ans=false;
        for(int i=0;i<26;i++)
        {
            if(arr[i]==check[i])
            {
                ans=true;
            }
            else
            {
                ans=false;
                break;
            }
        }
        if(ans)
        {
            return true;
        }
        while(right<s2.size()-1)
        {
            check[s2[left]-'a']--;
            left++;
            right++;
            check[s2[right]-'a']++;
            for(int i=0;i<26;i++)
            {
                if(arr[i]==check[i])
                {
                    ans=true;
                }
                else
                {
                    ans=false;
                    break;
                }
            }
            if(ans)
            {
                return true;
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna