#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	int findMin(vector<int>& nums) 
	{
		int len = nums.size();
		int min = nums[0];
		for (int i = 1; i < len; i++)
		{
			if (nums[i] < min) return nums[i];
		}
		return min;
	}
};

int main()
{

}