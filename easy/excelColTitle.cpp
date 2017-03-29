#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string convertToTitle(int n) {
	string s;
	do
	{
		n--;
		s = char((n % 26) + 'A') + s;
	} while (n /= 26);
	return s;
}
int main()
{
	cout << convertToTitle(52);
	getchar();
}