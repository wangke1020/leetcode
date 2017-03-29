#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:

	string makeRange(int start, int end)
	{
		string s(to_string(start));
		if (start != end)
		{
			s += "->" + to_string(end);
		}
		return s;

	}
	vector<string> summaryRanges(vector<int>& nums) {
		int len = nums.size();
		vector<string> v;
		if (len == 0) return v;
		int num = nums[0];
		int snum = num;
		for (int i = 1; i < len; ++i)
		{
			if (nums[i] != num + 1)
			{
				v.push_back(makeRange(snum, num));
				snum = nums[i];
			}
			num = nums[i];
		}
		v.push_back(makeRange(snum, num));
		return v;

	}
};

int main()
{
	Solution s;
	vector<int> nums = { 0,1,2,4,5,7,8,9, 10,11, 13 };
	auto v = s.summaryRanges(nums);
	for (string s : v)
	{
		cout << s << '\t';
	}
	getchar();

}