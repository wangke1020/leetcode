/*
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].

Note:
You must do this in-place without making a copy of the array.
Minimize the total number of operations.

*/
#include <iostream>
#include <vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
	for (auto i = nums.begin(), j = i; i != nums.end(); ++i)
		if (*i != 0)
			std::swap(*i, *j++);
}
int main()
{
	auto v = vector<int>{ 3, 1, 0, 2, 12,0 };
	moveZeroes(v);
	getchar();


}