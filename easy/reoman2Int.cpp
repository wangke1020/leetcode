//Roman to Integer
//Given a roman numeral, convert it to an integer.
//
//Input is guaranteed to be within the range from 1 to 3999.

#include <iostream>
#include <string>
#include <hash_map>
using namespace std;
int getvalue(char c)
{
	switch (c)
	{
	case 'I': return 1;
	case 'V': return 5;
	case 'X': return 10;
	case 'L': return 50;
	case 'C': return 100;
	case 'D': return 500;
	case 'M': return 1000;
	}
}
int romanToInt(string s)
{
	int val = 0;
	if (s.size() == 1) return getvalue(s.at(0));
	int i = 0, j = 1;
	char c = s.at(i);
	int cur_val = getvalue(c);
	char next;
	int next_val;
	for (; j < s.length(); ++j)
	{
		next = s.at(j);
		next_val = getvalue(next);
		if (next_val > cur_val) val -= cur_val;
		else val += cur_val;
		i = j;
		cur_val = next_val;
	} 
	val += next_val;
	return val;
}

int main()
{
	cout << "MCDXCI : " << romanToInt("MCDXCI") << endl;
	getchar();

}