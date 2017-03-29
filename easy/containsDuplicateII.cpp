#include  <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	bool containsNearbyDuplicate(vector<int>& nums, int k)
	{
		unordered_map<int, int>map;
		int len = nums.size();
		for (int i = 0; i < len; i++)
		{
			int value = nums[i];
			if (map.find(value) != map.end())
			{
				if (i - map[value] <= k)
					return true;
			}
			map[value] = i;
		}
		return false;
	}
};
int main()
{
	return 0;
}