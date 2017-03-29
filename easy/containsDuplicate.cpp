/*
Contains Duplicate

Given an array of integers, 
find if the array contains any duplicates. 
Your function should return true if any value appears at least twice in the array, 
and it should return false if every element is distinct.

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
	bool containsDuplicate(vector<int>& nums) 
	{
		int len = nums.size();
		if (len < 2) return false;
		sort(nums.begin(), nums.end());
		
		for (int i = 1; i < len; i++)
		if (nums[i - 1] == nums[i]) return true;
		return false;
	}
};
int main()
{
	getchar();
	return 0;
}