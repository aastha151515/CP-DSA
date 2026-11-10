class MinStack {
private:
    stack<int> mainstack;
    stack<int> mini;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        if(mini.empty() || mini.top()>=value)
        {
            mini.push(value);
        }
        mainstack.push(value);
    }
    
    void pop() {
        if(mainstack.top()==mini.top())
        {
            mini.pop();
        }
        mainstack.pop();
    }
    
    int top() {
        return mainstack.top();
    }
    
    int getMin() {
        return mini.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna