/*
Number of Digit One
Given an integer n, count the total number of digit 1 appearing in all non-negative integers less than or equal to n.

For example:
Given n = 13,
Return 6, because digit 1 occurred in the following numbers: 1, 10, 11, 12, 13.
*/

#include <iostream>
#include <vector>
using namespace std;
class Solution {
private:
	int countOne(int n)
	{
		if (n == 0) return 0;
		return countOne(n / 10) + (n % 10 == 1);

	}
public:
	int countDigitOne(int n) {
		int acc = 0;
		for (int i = 1; i <= n; ++i)
		{
			acc += countOne(i);
		}
		return acc;
	}
};
int main()
{
	Solution s;
	cout << "13: " << s.countDigitOne(13) << endl;
	getchar();
}