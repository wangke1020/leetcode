#include <iostream>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
	vector<int> ret;
	unordered_map<int, int>map;
	int len = nums.size();
	for (int i = 0; i < len;i++)
	{
		int val = nums[i];
		auto found = map.find(target - val);
		if (found != map.end())
		{
			ret.push_back(found->second);
			ret.push_back(i + 1);
			break;
		}
		map[val] = i + 1;
	}

	return ret;
}
int main()
{
	vector<int>nums = { 2, 7, 11, 15 };
	for (auto i : twoSum(nums, 22))
	{
		cout << i << " ";
	}
	getchar();
	return 0;

}