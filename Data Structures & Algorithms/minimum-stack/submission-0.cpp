class MinStack {
public:

    stack<int>st;
    stack<int>minStack;

    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(!minStack.empty() && minStack.top()<val){
            minStack.push(minStack.top());
        }else{
            minStack.push(val);
        }

        
    }
    
    void pop() {
        st.pop();
        minStack.pop();
    }
    
    int top() {
       return st.top();
        
    }
    
    int getMin() {
        return minStack.top();
    }
};
