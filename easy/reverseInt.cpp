//Reverse Integer
//Reverse digits of an integer.
//
//Example1: x = 123, return 321
//Example2 : x = -123, return -321

#include <iostream>
using namespace std;

//int reverse(int x) {
//	static int max_int = numeric_limits<int>::max() / 10;
//
//	int res = 0;
//	bool isMinus = false;
//	long _x = long(x);
//	if (_x < 0)
//	{
//		_x = -_x;
//		isMinus = true;
//	}
//	if (_x> max_int) return 0;
//	while (_x)
//	{
//		if (res > max_int) return 0;
//		res = res * 10 + _x % 10;
//		_x /= 10;
//	}
//	return isMinus ? -res : res;
//}


int reverse(int x) {
	const int max = numeric_limits<int>::max() / 10;
	int sign = 1;
	if (x<0) {
		sign = -1;
		x = -x; // make it positive
		if (x<0) // x was numeric_limits<int>::min() -2^31
			return 0;
	}
	int res = 0;
	while (x) {
		if (res > max)
			return 0;
		res = res * 10 + x % 10;
		x /= 10;
	}
	return res*sign;
}
int main()
{
	cout << numeric_limits<int>::max() << endl;;
	cout << reverse(-1000000000003) << endl;
	getchar();
}
