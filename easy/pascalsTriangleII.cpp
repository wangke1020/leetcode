
/*
Pascal's Triangle II 
Given an index k, return the kth row of the Pascal's triangle.

For example, given k = 3,
Return [1,3,3,1].

*/
#include <iostream>
#include <vector>
using namespace std;
//class Solution {
//public:
//	vector<int> getRow(int rowIndex)
//	{
//		vector<int> ret = { 1 };
//		if (rowIndex == 0) return ret;
//		ret.push_back(1);
//		if (rowIndex == 1) return ret;
//		
//		for (int i = 1; i < rowIndex; ++i)
//		{
//			vector<int> tmp_v; 
//			tmp_v.push_back(1);
//			for (int j = 0; j < i; ++j)
//			{
//				int sum = ret[j] + ret[j + 1];
//				tmp_v.push_back(sum);
//			}
//			tmp_v.push_back(1);
//			ret = tmp_v;
//		}
//		return ret;
//	}
//};
class Solution {
public:	
	vector<int> getRow(int rowIndex) {
		vector<int> row;
		if (rowIndex<0) return row;
		row.push_back(1);
		if (rowIndex == 0) return row;

		vector<int> lastrow;
		lastrow.push_back(1); //last row only with 1;

		for (int i = 1; i <= rowIndex; i++){
			row.clear();
			row.push_back(1);
			if (i>1)
			{
				for (int j = 1; j < i; j++)
				{
					row.push_back(lastrow[j - 1] + lastrow[j]);
				}
			}
			row.push_back(1);
			lastrow = row;
		}
		return row;
	}
};
void main()
{
	Solution s;
	auto v = s.getRow(3);
	for (auto item : v)
	{
		cout << item << " ";
	}
	getchar();
	return;
}