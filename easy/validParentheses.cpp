#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
	bool isValid(string s) 
	{
		stack<char> sta;
		for (char c : s)
		{
			switch (c)
			{
			case '(':
			case '[':
			case '{':
				sta.push(c);
				break;
			case ')':
				if (sta.empty() || sta.top() != '(') return false;
				sta.pop();
				break;
			case ']':
				if (sta.empty() || sta.top() != '[') return false;
				sta.pop();
				break;
			case '}':
				if (sta.empty() || sta.top() != '{') return false;
				sta.pop();
				break;
			default:
				break;
			}
		}
		return sta.empty();
	}
};

void main()
{
	Solution solution;
	string s = "}{([)]123}";
	cout << solution.isValid(s) << endl;
	getchar();
}