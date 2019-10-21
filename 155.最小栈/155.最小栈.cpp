class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {}
    
    void push(int x) 
    {
        if(st.empty() || x <= min.top())
            min.push(x);
         st.push(x);
    }
    
    void pop() {
        if(st.top() == min.top())
            min.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min.top();
    }
private:
    std::stack<int> st;
    std::stack<int> min;
};


/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
