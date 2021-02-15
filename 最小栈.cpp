class MinStack {
public:
    stack<int> st;
    stack<int> minst;
    /** initialize your data structure here. */
    MinStack() {}
    
    void push(int x) {
        st.push(x);
        if(minst.empty() || x <= minst.top())
            minst.push(x);
    }
    
    void pop() {       
        if(st.top() == minst.top())
            minst.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minst.top();
    }
};

