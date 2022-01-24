class Solution
{
    public:
    //Function to calculate the span of stock's price for all n days.
    // Logic - Store index in the stack. When the element of index
    // of top of the stack is less than the current we pop the elements
    // So only the element greater than current's index will be there
    // So we take difference and store them in the ans vector.
    vector <int> calculateSpan(int price[], int n)
    {
        vector<int>ans;
        stack<int>s;
        for(int i=0;i<n;i++){
            if(s.empty()){
                s.push(i);
                ans.push_back(1);
            }
            else{
                while(!s.empty() && price[s.top()]<=price[i]){
                    s.pop();
                }
                if(s.empty()) ans.push_back(i+1);
                else{
                    ans.push_back(i-s.top());
                }
                s.push(i);
            }
        }
        
        return ans;
    }
};
