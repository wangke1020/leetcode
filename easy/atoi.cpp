//String to Integer(atoi)
//Implement atoi to convert a string to an integer.
//
//Hint: Carefully consider all possible input cases.If you want a challenge, please do not see below and ask yourself what are the possible input cases.
//
//Notes : It is intended for this problem to be specified vaguely(ie, no given input specs).You are responsible to gather all the input requirements up front.

#include <iostream>
#include <algorithm>
using namespace std;


class Solution {
public:
	int atoi(string str) {
		int len = str.length();
		long long value = 0;
		int factor = 1;
		int i;
		for (i = 0; i < len; i++)
		{
			char c = str.at(i);
			if (iswspace(c) != 0) continue;
			else if (c == '-')
			{
				factor = -1;
				++i;
				break;
			}
			else if (c == '+')
			{
				++i;
				break;
			}
			else break;
		}
		for (; i < len; ++i)
		{
			char c = str.at(i);
			if (isdigit(c) == 0)
			{
				break;
			}
			value = value * 10 + factor*int(c - '0');
			if (value < INT_MIN) return INT_MIN;
			if (value > INT_MAX)  return INT_MAX;
			
		}
		return (int)value;
	}
};

void main()
{
	Solution s;
	cout << s.atoi("  -214123242344836471sadfasdfabc") << endl;
	getchar();
}