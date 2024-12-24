class MinStack {
public:

    stack<int> st;
    stack<int> mn;
    int min=INT_MAX;

    MinStack() {
        
    }
    
    void push(int val) {
        min = val < min ? val : min;
        if(!mn.empty())
        {
            if(mn.top()>val)
                mn.push(val);
            else
                mn.push(mn.top());
        }
        else
            mn.push(val);
        st.push(val);
    }
    
    void pop() {
        mn.pop();
        st.pop();

    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mn.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */