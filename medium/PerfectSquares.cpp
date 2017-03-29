/*
Perfect Squares

Given a positive integer n, find the least number of perfect square numbers (for example, 1, 4, 9, 16, ...) which sum to n.

For example, given n = 12, return 3 because 12 = 4 + 4 + 4; given n = 13, return 2 because 13 = 4 + 9.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
	int numSquares(int n) {
		static vector<int> dp{ 0 };
		while (dp.size() <= n) {
			int m = dp.size(), squares = INT_MAX;
			for (int i = 1; i*i <= m; ++i)
				squares = min(squares, dp[m - i*i] + 1);
			dp.push_back(squares);
		}
		return dp[n];
	}
};

int main()
{
	Solution s;
	cout << "12:  " << s.numSquares(12) << endl;
	cout << "13:  " << s.numSquares(13) << endl;
	cout << "16:  " << s.numSquares(16) << endl;
	getchar();
}