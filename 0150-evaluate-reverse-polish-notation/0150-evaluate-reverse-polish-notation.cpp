class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<char> op;
        stack<int> num;
        for(auto i:tokens)
        {
            if(i=="+")
            {
                int b=num.top();
                num.pop();
                int a=num.top();
                num.pop();
                int ans=a+b;
                num.push(ans);
            }
            else if(i=="-")
            {
                int b=num.top();
                num.pop();
                int a=num.top();
                num.pop();
                int ans=a-b;
                num.push(ans);
            }
            else if(i=="*")
            {
                int b=num.top();
                num.pop();
                int a=num.top();
                num.pop();
                int ans=a*b;
                num.push(ans);
            }
            else if(i=="/")
            {
                int b=num.top();
                num.pop();
                int a=num.top();
                num.pop();
                int ans=a/b;
                num.push(ans);
            }
            else
            {
                num.push(stoi(i));
            }
        }
        return num.top();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna