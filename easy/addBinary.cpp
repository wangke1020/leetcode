#include <iostream>

using namespace std;


class Solution {
public:
	string addBinary(string a, string b) {
		int r1 = a.size() - 1;
		int r2 = b.size() - 1;
		int carry = 0;
		string ret;
		while (1)
		{
			if (r1<0 && r2<0 && carry == 0) break;
			int val = carry + (r1<0 ? 0 : (a[r1] - '0')) + (r2<0 ? 0 : (b[r2] - '0'));
			carry = val / 2;
			ret.insert(0, 1, '0' + val % 2);
			r1--;
			r2--;
		}
		return ret;
	}
};