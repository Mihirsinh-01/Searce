#include <bits/stdc++.h>

using namespace std;

/*

Given an integer array, find the maximum length contiguous subarray having a given sum.

Input : nums[] = [5, 6, -5, 5, 3, 5, 3, -2, 0], target = 8
Output: [-5, 5, 3, 5]
Explanation: The subarrays with sum 8 are [[-5, 5, 3, 5], [3, 5], [5, 3]]. The longest subarray is [-5, 5, 3, 5] having length 4.

Note: Since an input can contain several maximum length subarrays with given sum, the solution should return any one of the maximum length subarray.

*/


vector<int> findMaxLenSubarray(vector<int> const &nums, int target)
{
	int n=nums.size();
	unordered_map<int,int>m;
	m[nums[0]]=1;
	int sm=nums[0];
	int l=-1,r=-1;
	if(sm==target){
		l=0;
		r=0;
	}
	for(int i=1;i<n;i++){
		sm+=nums[i];
		if(m[sm-target]!=0){
			if(l==-1){
				l=m[sm-target];
				r=i;
			}
			else{
				if(r-l<i-m[sm-target]){
					l=m[sm-target];
					r=i;
				}
			}
		}
		if(m[sm]==0){
			m[sm]=i+1;
		}
		if(sm==target){
			l=0;
			r=i;
		}
	}
	vector<int>ans;
	if(l==-1) return ans;
	for(int i=l;i<=r;i++){
		ans.push_back(nums[i]);
	}
	return ans;
}

int main() {
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int target;
    cin>>target;
    vector<int>ans=findMaxLenSubarray(v,target);
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
}