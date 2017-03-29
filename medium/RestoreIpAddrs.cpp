/*
Restore IP Addresses
Given a string containing only digits, restore it by returning all possible valid IP address combinations.

For example:
Given "25525511135",

return ["255.255.11.135", "255.255.111.35"]. (Order does not matter)
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;


bool validIPNum(const string& s)
{
	int len = s.length();
	if (len > 3) return false;
	if (len == 1) return true;
	if (s[0] == '0') return false;
	if (atoi(s.c_str()) > 255) return false;
	return true;
}

string getIP(string s, int i, int j, int k)
{
	s.insert(i, ".");
	s.insert(j + 1, ".");
	s.insert(k + 2, ".");
	return s;
}
vector<string> restoreIpAddresses(string s) 
{
	vector<string> v;
	int len = s.length();
	if (len < 4) return v;
	for (int i = 1; i < len - 2; ++i)
	{
		string ip;
		if (i > 3) break;
		if (validIPNum(s.substr(0, i)))
		{
			for (int j = i + 1; j < len - 1; ++j)
			{
				if ((j - i) > 3) break;
				if (validIPNum(s.substr(i, j - i)))
				{
					for (int k = j + 1; k < len; ++k)
					{
						if ((k - j) > 3) break;
						if (validIPNum(s.substr(j, k - j)))
						{
							if(validIPNum(s.substr(k, len -k)))
								v.push_back(getIP(s, i, j, k));
						}
					}
				}
			}
		}
	}
	return v;

}





int main()
{
	auto v = restoreIpAddresses("010010");
	getchar();
}