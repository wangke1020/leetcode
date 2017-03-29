//Palindrome Number
//Determine whether an integer is a palindrome.Do this without extra space.

#include <iostream>
using namespace std;

bool isPalindrome(int x) 
{
	int temp = 0;
	if ((x % 10 == 0 && x != 0) || x < 0) return false;
	while (temp < x)
	{
		temp = temp * 10 + x % 10;
		x /= 10;
	}
	return temp == x || temp / 10 == x;
}
int main()
{
	cout << int(-2147447412) << endl;
	cout << -101 << ":" << isPalindrome(-101) << endl;
	cout << 1235321 << ":" << isPalindrome(1235321) << endl;
	cout << 123232229 << ":" << isPalindrome(123232229) << endl;
	getchar();
}