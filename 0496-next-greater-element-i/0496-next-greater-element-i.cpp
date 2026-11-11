class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        vector<int> ans(nums1.size());
        unordered_map<int,int> mp;
        for(int i=0;i<nums2.size();i++)
        {
            if(st.empty() || st.top()>nums2[i])
            {
                st.push(nums2[i]);
            }
            else
            {
                while(!st.empty() && st.top()<=nums2[i])
                {
                    mp[st.top()]=nums2[i];
                    st.pop();
                }
                st.push(nums2[i]);
            }
        }
        while(!st.empty())
        {
            mp[st.top()]=-1;
            st.pop();
        }
        for(int i=0;i<nums1.size();i++)
        {
            ans[i]=mp[nums1[i]];
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna