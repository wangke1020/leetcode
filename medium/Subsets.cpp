/*
Given a set of distinct integers, nums, return all possible subsets.

Note:
Elements in a subset must be in non-descending order.
The solution set must not contain duplicate subsets.
For example,
If nums = [1,2,3], a solution is:

[
[3],
[1],
[2],
[1,2,3],
[1,3],
[2,3],
[1,2],
[]
]

*/
#include <vector>
using namespace std;
#include <algorithm>
vector<vector<int>> subsets(vector<int>& nums)
{
	vector<int> sorted_nums = nums;
	sort(sorted_nums.begin(), sorted_nums.end());
	vector<vector<int>> ret;
	int sz = sorted_nums.size();
	int count = pow(2, sz);
	for (int i = 0; i < count; ++i)
	{
		vector<int> v;
		for (int j = 0; j < sz; ++j)
		{
			if (i & (int)pow(2, sz - j - 1))
				v.push_back(sorted_nums[j]);
		}

		ret.push_back(v); 
	}
	return ret;
}

int main()
{
	vector<int> nums{ 1, 3, 2 };
	auto v = subsets(nums);
	getchar();
}