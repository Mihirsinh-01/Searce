class Solution {
public:
    // Function for converting String to Integer
    int stoi(string s){
        int ans=0,flag=0,i=0;
        if(s[0]=='-'){
            flag=1;
            i=1;
        }
        for(;i<s.length();i++){
            ans=ans*10+(s[i]-'0');
        }
        if(flag) ans*=-1;
        return ans;
    }


    // Input Format is vector of strings containing integers and operators
    // with always valid input
    // Logic - Whenever Integer Encountered Push Operation
    // and Whenever Operator encountered POP two integers from stack 
    // and apply the operation and again PUSH ans in the stack
    // Final Output will be on the TOP of stack.
    int evalRPN(vector<string>& tokens) {
        // Using C++ Stack STL
        stack<int>s;
        for(int i=0;i<tokens.size();i++){
            string curr=tokens[i];
            // Condition for checking whether input is operator or not
            if(curr=="*" || curr=="-" || curr=="+" || curr=="/")
            {
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                if(curr=="*") s.push(a*b);
                if(curr=="+") s.push(a+b);
                if(curr=="-") s.push(b-a);
                if(curr=="/") s.push(b/a);
            }
            else{
                int a=stoi(curr);
                s.push(a);
            } 
        }
        return s.top();
    }
};