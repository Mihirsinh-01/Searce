/*

Given an integer array, check if it contains a contiguous subarray having zero-sum.

Input : [3, 4, -7, 3, 1, 3, 1, -4, -2, -2]
Output: true
Explanation: The subarrays with zero-sum are

[3, 4, -7]
[4, -7, 3]
[-7, 3, 1, 3]
[3, 1, -4]
[3, 1, 3, 1, -4, -2, -2]
[3, 4, -7, 3, 1, 3, 1, -4, -2, -2]

Input : [4, -7, 1, 2, -1]
Output: false
Explanation: The subarray with zero-sum doesn't exist.

*/


class Solution
{
public:
	bool hasZeroSumSubarray(vector<int> const &nums)
	{
		unordered_map<int,int>um;
		int sum=nums[0];
		um[sum]=1;
		if(sum==0) return true;
		for(int i=1;i<nums.size();i++){
			sum+=nums[i];
			if(um[sum]==1){
				return true;
			}
			else{
				um[sum]=1;
			}
			if(sum==0) return true;
		}
		return false;
	}
};
