class Solution {
public:
	int climbStairs(int n) {
		int f0 = 1, f1 = 1;
		for (int i = 2; i <= n; i++){
			int tmp = f1;
			f1 += f0;
			f0 = tmp;
		}
		return f1;
	}
};