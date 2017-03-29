#include <iostream>
#include <cstdint>
using namespace std;

class Solution {
public:
	uint32_t reverseBits(uint32_t n) {
		int i = 0;
		int m = 0;
		while (n)
		{
			m = (m << 1) | (n % 2);		
			n = n / 2;
			i++;
		}
		return m << (32 - i);
	}
};
int main()
{
	Solution s;
	cout << s.reverseBits(43261596);
	getchar();
}