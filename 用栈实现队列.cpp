class MyQueue {
public:
    stack<int> popst;
    stack<int> pushst;
    /** Initialize your data structure here. */
    MyQueue() {}
    
    /** Push element x to the back of queue. */
    void push(int x) {
    pushst.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if(popst.empty())
        {
            while(!pushst.empty())
            {
                popst.push(pushst.top());
                pushst.pop();
            }
        }
        int front = popst.top();
        popst.pop();
        return front;
    }
    
    /** Get the front element. */
    int peek() {
        int front = pop();
        popst.push(front);
        return front;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return popst.empty() && pushst.empty();
    }
};

