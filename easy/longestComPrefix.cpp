#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
	bool checkEq(vector<string> strs, int i, int strs_len, string& s)
	{
		char c = s[i];
		for (int iter_i = 0; iter_i < strs_len; iter_i++)
		{
			if (strs[iter_i][i] != c)
				return false;
		}
		return true;
	}

	string longestCommonPrefix(std::vector<string>& strs) 
	{
		int strs_len = strs.size();
		if (strs_len == 0) return "";
		string s = strs.back();
		strs.pop_back();
		if (--strs_len == 0) return s;

		int minLen = s.length();
		if (minLen == 0) return "";
		
		for (auto str : strs)
		{
			size_t len = str.length();
			if (len < minLen) minLen = len;
		}

		int i = 0;
		for (; i < minLen; i++)
		{
			if (!checkEq(strs, i, strs_len, s))
				break;
		}
		return i == 0 ? "" : strs[0].substr(0, i);
	}
};

int main()
{
	Solution s;
	vector<string> v0 = {"a", "b"};
	cout << s.longestCommonPrefix(v0) << endl;
	getchar();
	return 0;
}