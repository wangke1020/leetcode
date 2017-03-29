/*
Happy Number

A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.



*/

#include <iostream>
#include <unordered_set>
using namespace std;
class Solution {
public:
	bool isHappy(int n) 
	{
		unordered_set<int> set;

		while (n != 1)
		{
			if (set.find(n) != set.end()) return false;
			set.insert(n);
			n = squareSum(n);
			
		}
		return true;
	}
	int squareSum(int n)
	{
		int sum = 0;
		do
		{
			int m = n % 10;
			sum += m * m;
			n = n / 10;
		} while (n);
		return sum;
	}
};

int main()
{
	Solution s;
	cout << s.squareSum(100) << endl;
	//cout << s.isHappy(19) << endl;
	cout << s.isHappy(11) << endl;
	getchar();
	return 0;
}