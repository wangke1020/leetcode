#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	int lengthOfLastWord(string s) 
	{
		auto found = s.find_last_not_of(' ');
		if (found != string::npos) s = s.substr(0, found+1);
		int len = s.length();
		found = s.find_last_of(' ');
		if (found == string::npos) return s.length();
		else return len - found -1;
	}
	
};
int main()
{
	string a = " hello ";
	Solution s;
	cout << s.lengthOfLastWord(a) << endl;
	getchar();
	return 0;
}