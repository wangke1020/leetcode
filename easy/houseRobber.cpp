
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
class Solution {
public:
	int rob(vector<int> &num) {
		int n = num.size();
		if (n == 0) return 0;
		vector<int> result(n + 1, 0);
		result[1] = num[0];
		for (int i = 2; i <= n; i++){
			result[i] = max(result[i - 1], result[i - 2] + num[i - 1]);
		}
		return result[n];


	}
};

int main()
{
	Solution s;
	vector<int> v;
	v.push_back(5);
	v.push_back(3);
	v.push_back(5);
	v.push_back(7);
	s.rob(v);

	getchar();
	return 0;
}