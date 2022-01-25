class Solution {
public:
    // Logic - Appended duplicate elements for accessing in circular manner.
    // Pop from the stack untill the top of stack < Current Element
    // and note the answer and then push the current index in the stack.
    vector<int> nextGreaterElements(vector<int>& nums) {

        // Duplicating the array
        vector<int>newNums=nums;
        for(int i=0;i<nums.size();i++){
            newNums.push_back(nums[i]);
        }


        stack<int>s;
        s.push(0);
        vector<int>ans(newNums.size(),INT_MIN);
        for(int i=1;i<newNums.size();i++){
            while(!s.empty() && newNums[s.top()]<newNums[i]){
                ans[s.top()]=newNums[i];
                s.pop();
            }
            s.push(i);
        }

        // Taking the first N answers from the array.
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            if(ans[i]==INT_MIN) res.push_back(-1);
            else res.push_back(ans[i]);
        }
        return res;
    }
};