class MyStack {
public:
    queue<int> a, b;
    int sz;
    MyStack() {
        sz=0;
    }
    
    void push(int x) {
        b.push(x);
        while(!a.empty()){
            b.push(a.front());
            a.pop();
        }
        queue<int>temp;
        temp=a;
        a=b;
        b=temp;
        sz++;
    }
    
    int pop() {
        if(a.empty()){
            return -1;
        }
        sz--;
        int f=a.front();
        a.pop();
        return f;
    }
    
    int top() {
        if(a.empty()){
            return -1;
        }
        return a.front();
    }
    
    bool empty() {
        return a.size()==0;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */