
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Solution {
public:
	
	string countAndSay(int n) 
	{
		string ret = "1";
		for (int i = 2; i <= n; i++)
		{
			ret = countAndSay(ret);
		}
		return ret;

	}
	string countAndSay(string& n_str)
	{
		stringstream ss;
		char temp = n_str[0];
		int len = n_str.length();
		int count = 1;
		int i = 1;
		for (; i < len; i++)
		{
			if (n_str[i] == temp)
			{
				count++;
			}
			else
			{
				ss << count << temp;
				temp = n_str[i];
				count = 1;
			}
		}
		ss << count << n_str[i - 1];
		return ss.str();
	}
};
int main()
{
	Solution s;
	cout << s.countAndSay(5) << endl;
	getchar();
	return 0;
}