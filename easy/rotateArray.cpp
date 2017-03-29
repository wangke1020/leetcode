#include <iostream>
using namespace std;

class Solution 
{
public:
	void rotate(int nums[], int n, int k) 
	{
		
		k = k % n;
		int temp = nums[n - 1];
		for (int i = 0; i < k; i++)
		{
			for (int j = n-1; j >= 0; j--)
			{
				nums[j+1] = nums[j];
			}
			nums[0] = temp;
			temp = nums[n - 1];
		}
	}
};

int main()
{
	int nums[6] = { 1, 2, 3, 4, 5, 6};
	Solution s;
	size_t len = sizeof(nums) / sizeof(int);
	s.rotate(nums, len, 1);
	for (auto i = 0; i < len; i++)
		cout << nums[i] << " ";
		
	getchar();
}