/*
*	Factorial Trailing Zeroes
*	Given an integer n, return the number of trailing zeroes in n!.
*   Note: Your solution should be in logarithmic time complexity.
*/


#include <iostream>
using namespace std;


int trailingZeroes(int n) {
	int cnt = 0;
	while (n>=5)
	{
		cnt += n / 5;
		n = n / 5;
	}
	return cnt;
}
int main()
{
	cout << trailingZeroes(151) << endl;
	getchar();
}