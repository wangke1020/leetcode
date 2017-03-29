//ZigZag Conversion
//The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)
//
//P   A   H   N
//A P L S I I G
//Y   I   R
//And then read line by line : "PAHNAPLSIIGYIR"
//Write the code that will take a string and make this conversion given a number of rows :
//
//string convert(string text, int nRows);
//convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR".

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string convert(string s, int nRows)
{
	string ret;
	vector<char> zag;
	vector<char> zig;
	int len = s.length();
	int i = 0;
	while (i < len)
	{
		int tmp = i + nRows;
		for (; i < min(tmp, len); ++i)
		{
			zag.push_back(s[i]);
		}
		if (i++ < len)
		{
			zig.push_back(s[i]);
		}
	}
		
}
int main()
{

}