class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        deque<int>dq;
        for(int i=0;i<k;i++){
            while(!dq.empty() && nums[dq.back()]<nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        for(int i=k;i<nums.size();i++){
            ans.push_back(nums[dq.front()]);
            if(dq.front()==i-k) dq.pop_front();
            while(!dq.empty() && nums[dq.back()]<nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
            cout<<dq.front()<<endl;
        }
        ans.push_back(nums[dq.front()]);
        return ans;
    }
};