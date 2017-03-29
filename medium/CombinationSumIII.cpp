
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
	void combination(vector<vector<int>>& result, vector<int> sol, int k, int n) {
		if (sol.size() == k && n == 0) { result.push_back(sol); return; }
		if (sol.size() < k) {
			for (int i = sol.empty() ? 1 : sol.back() + 1; i <= 9; ++i) {
				if (n - i < 0) break;
				sol.push_back(i);
				combination(result, sol, k, n - i);
				sol.pop_back();
			}
		}
	}

	vector<vector<int>> combinationSum3(int k, int n) {
		vector<vector<int>> result;
		vector<int> sol;
		combination(result, sol, k, n);
		return result;
	}
};


void squareSumTraceback(vector<vector<int>>& result, vector<int> sol, int k, int n)
{
	if (sol.size() == k && n == 0) result.push_back(sol);
	if (sol.size() < k)
	{
		for (int i = sol.empty() ? 1 : sol.back() + 1; i <= sqrt(n); ++i)
		{
			if (n - i * i < 0) break;
			sol.push_back(i);
			squareSumTraceback(result, sol, k, n - i * i);
			sol.pop_back();
		}
	}
}
vector<vector<int>> squareSum(int k, int n)
{
	vector<vector<int>> result;
	vector<int> sol;
	squareSumTraceback(result, sol, k, n);
	return result;
}
int main()
{
	auto v = squareSum(3, 45);
	for (auto&& item : v)
	{
		for (auto integer : item)
		{
			cout << integer << " ";
		}
		cout << endl;
	}
	getchar();
	return 0;
}
