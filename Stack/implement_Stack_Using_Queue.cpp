class MyStack {
public:
    queue<int>q;
    MyStack() {
        
    }
    
    void push(int x) {
      q.push(x);
        int p=q.size();
        p--;
        while(p>0){
          int x1=q.front();
            q.pop();
            q.push(x1);
            p--;
        }
    }
    
    int pop() {
       int x1=q.front();
        q.pop();
        return x1;
    }
    
    int top() {
       return q.front(); 
    }
    
    bool empty() {
      return q.size()==0;  
    }
};

// The above code makes push operation costly we can also make the pop operation costly.

// Problem Statement : https://leetcode.com/problems/implement-stack-using-queues/
