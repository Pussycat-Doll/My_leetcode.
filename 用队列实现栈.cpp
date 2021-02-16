class MyStack {
public:
    queue<int> pushq;//����pushԪ�صĶ���
    queue<int> popq;
    int topval;//���ջ��Ԫ��
    /** Initialize your data structure here. */
    MyStack() 
    {}
    
    /** Push element x onto stack. */
    void push(int x) 
    {
        topval = x;
        pushq.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() 
    {
        while(pushq.size() > 1)
        {
            topval = pushq.front();
            popq.push(topval);
            pushq.pop();
        }
        int ant = pushq.front();
        pushq.pop();
        queue<int> tmp = pushq;
        pushq = popq;
        popq = tmp;
        
        return ant;
    }
    
    /** Get the top element. */
    int top() {
        return topval;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() 
    {
        return pushq.empty();
    }
};

