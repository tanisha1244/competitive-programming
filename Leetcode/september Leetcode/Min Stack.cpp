class MinStack {
public:
    vector< pair<int,int> > s;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty())
            s.push_back({val,val});
        else
            s.push_back({val,min(s.back().second,val)});    
        
    }
    
    void pop() {
        s.pop_back(); 
        
    }
    
    int top() {
        return s.back().first; 
    }
    
    int getMin() {
        return s.back().second; 
        
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
//O(N)
/*class MinStack {
private:
    stack<int> s;
    int minInStack = INT_MAX;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(val <= minInStack){
            s.push(minInStack);
            minInStack = val;            
        }
        s.push(val);
    }
    
    void pop() {
        int temp = s.top();
        s.pop();
        if(temp == minInStack){
            minInStack = s.top();
            s.pop();
        }
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minInStack;
    }
};

*/