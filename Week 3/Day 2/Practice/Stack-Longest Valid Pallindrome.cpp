class Solution {
public:
    // Logic - Push Character with Index where the top of the stack 
    // represents index upto which invalid sequence is there.
    int longestValidParentheses(string s) {
        int n=s.length();
        stack<pair<char,int>>st;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push({'(',i});
            }
            else{
                if(st.empty() || st.top().first==')'){
                   st.push({')',i}); 
                }
                else if(st.top().first=='('){
                    st.pop();
                    // Empty indicates till now the string is valid.
                    if(st.empty()){
                        ans=max(ans,i+1);
                    }
                    else{
                        // Taking the difference upto the last invalid index.
                        int dif=i-st.top().second;
                        ans=max(ans,dif);
                    }
                }
            }
        }
        return ans;
    }
};