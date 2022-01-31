/*

Given an array of sorted integers that may contain several duplicate elements, count the total number of distinct absolute values in it.

Input : [-1, -1, 0, 1, 1, 1]
Output: 2
Explanation: There are 2 distinct absolutes in the array [0, 1]

Input : [-2, -1, 0, 1, 2, 3]
Output: 4
Explanation: There are 4 distinct absolutes in the array [0, 1, 2, 3]

Input : [-1, -1, -1, -1]
Output: 1
Explanation: There is only 1 distinct absolute in the array [1]

*/

class Solution
{
public:
	int findDistinctCount(vector<int> const &nums)
	{
		unordered_map<int,int>m;
		for(int i=0;i<nums.size();i++){
			if(nums[i]<0){
				m[nums[i]*(-1)]++;
			}
			else{
				m[nums[i]]++;
			}
		}
		return m.size();
	}
};
