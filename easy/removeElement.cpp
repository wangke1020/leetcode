
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	int removeElement(vector<int>& nums, int val)
	{
		vector<int>::iterator  itr = nums.begin();
		while (itr != nums.end())
		{
			if (*itr == val)
				itr = nums.erase(itr);
			else
				++itr;
		}
		return nums.size();
	}
};