class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
      stack_ = new std::stack<int>();
      min_stack_ = new std::stack<int>();
      
    }
    
    void push(int x) {
      stack_->push(x);
      if(min_stack_->empty() || x<= min_stack_->top()) {
        min_stack_->push(x);
      }
    }
    
    void pop() {
      if(stack_->top() == min_stack_->top()) {
        min_stack_->pop();
      }
      stack_->pop();
    }
    
    int top() {
        return stack_->top();
    }
    
    int getMin() {
       return min_stack_->top(); 
    }
  private:
    std::stack<int>* stack_;
    std::stack<int>* min_stack_;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
