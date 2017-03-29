#include <iostream>
#include <cstdint>
using namespace std;
class Solution {
public:
	int hammingWeight(uint32_t n) {
		int i = 0;
		while (n)
		{
			if (n % 2 == 1) ++i;
			n = n / 2;
		}
		return i;
	}
};
int main()
{
	Solution s;
	int n = 11;
	cout << s.hammingWeight(11) << endl;
	getchar();
}