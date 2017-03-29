#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	bool isPalindrome(string s)
	{
		int len = s.length();
		if (len == 0) return true;
		int i = 0;
		int j = s.length() - 1;
		while (i < j)
		{
			if (!isalnum(s[i]))
			{
				++i;
				continue;
			}
			if (!isalnum(s[j]))
			{
				--j;
				continue;
			}
			if (CaselessEq(s[i], s[j]))
			{
				++i;
				--j;
			}
			else
				return false;
		}
		return true;
	}
	bool CaselessEq(char lhs, char rhs)
	{
		int diff = abs(lhs - rhs);
		return diff == 0 || diff == 32;
	}
};
void main()
{
	Solution solution;
	string s = "race a car";
	cout << solution.isPalindrome(s) << endl;
	getchar();
}