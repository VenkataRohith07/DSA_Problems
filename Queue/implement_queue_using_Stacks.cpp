class MyQueue {
public:
    stack<int>s1,s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(s1.size()>0){
           s2.push(s1.top());
           s1.pop();
       } 
       s1.push(x); 
        while(s2.size()>0){
            s1.push(s2.top());
            s2.pop();
        } 
    }
    
    int pop() {
      int x=s1.top();
        s1.pop();
        return x;
    }
    
    int peek() {
       return s1.top(); 
    }
    
    bool empty() {
       return s1.size()==0; 
    }
};


//we can also implement this making the pop operation costly.

//Problem Statement : https://leetcode.com/problems/implement-queue-using-stacks/
