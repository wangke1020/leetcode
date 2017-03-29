#include <iostream>
using namespace std;

class Solution 
{
public:
	int titleToNumber(string s) 
	{
		size_t len = s.length();
		int val = 0;
		for (int i = 0; i < len; i++)
		{
			val = val*26 + s.at(i) - 'A' + 1;
		}
		return val;
	}
};

int main()
{
	string str("WWA");
	Solution s;
	cout << s.titleToNumber(str) << endl;
	getchar();
}