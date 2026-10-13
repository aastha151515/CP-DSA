class Solution {
public:
    int compress(vector<char>& chars) {
        if(chars.size()==1)
        {
            return 1;
        }
        int left=0;
        int c=0;
        for(int i=0;i<chars.size();i++)
        {
            if(i>0 && chars[i]!=chars[i-1])
            {
                if(c==1)
                {
                    chars[left]=chars[i-1];
                    left++;
                }
                else
                {
                    chars[left]=chars[i-1];
                    left++;
                    string s=to_string(c);
                    for(int j=0;j<s.size();j++)
                    {
                        chars[left++]=s[j];
                    }
                }
                c=1;
            }
            else
            {
                c++;
            }
        }
        chars[left]=chars[chars.size()-1];
        left++;
        string s=to_string(c);
        for(int j=0;j<s.size();j++)
        {
            chars[left++]=s[j];
        }
        if(c==1){
            return left-1;
        }
        return left;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna