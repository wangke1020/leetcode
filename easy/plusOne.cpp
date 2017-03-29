/*
Plus One

Given a non-negative number represented as an array of digits, plus one to the number.

The digits are stored such that the most significant digit is at the head of the list.

*/


#include <iostream>
#include <vector>
using namespace std;



class Solution 
{
public:
	vector<int> plusOne(vector<int>& digits)
	{
		size_t sz = digits.size();
		int carry = 0;
		
		if (++digits[sz - 1] == 10)
		{
			digits[sz - 1] = 0;
			carry = 1;
		}
		if (sz == 1)
		{
			if (carry == 1) 	digits.insert(digits.begin(), 1);
			return digits;
		}
		
		for (int i = sz - 2; i > 0; i--)
		{
			digits[i] = digits[i] + carry;
			if (digits[i] == 10)
			{
				digits[i] = 0;
				carry = 1;
			}
			else carry = 0;
		}
		digits[0] += carry;
		if (digits[0] == 10)
		{
			digits[0] = 0;
			digits.insert(digits.begin(), 1);
		}
		return digits;
	}
};

void printDigits(vector<int>& digits)
{
	for (int i : digits)
	{
		cout << i;
	}
	cout << endl;
}

int main()
{
	Solution s;
	vector<int> digits = { 9 };
	printDigits(digits);
	s.plusOne(digits);
	printDigits(digits);
	getchar();
	return 0;
}