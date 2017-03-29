/*Count Primes
Count the number of prime numbers less than a non-negative number, n.
*/

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/*int countPrimes(int n) 
	{
		int num = 0;
		for (int i = 2; i < n; i++)
		{
			if (isPrime(i)) ++num;
		}
		return num;
	}
	int isPrime(int n)
	{
		int i = 2;
		while (i*i <= n)
		{
			if (n % i == 0)
				return false;
			i++;
		}
		return true;
	}*/
	int countPrimes(int n) {
		if (n <= 2) return 0;
		vector<bool> passed(n, false);
		int sum = 1;
		int upper = sqrt(n);
		for (int i = 3; i<n; i += 2) {
			if (!passed[i]) {
				sum++;
				//avoid overflow
				if (i>upper) continue;
				for (int j = i*i; j<n; j += i) {
					passed[j] = true;
				}
			}
		}
		return sum;
	}
};
int main()
{
	Solution s;
	cout << s.countPrimes(5);
	getchar();
	return 0;
}