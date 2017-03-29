#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
	int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
		int overlap_width = max(min(C, G) - max(A, E), 0), overlap_height = max(min(D, H) - max(B, F), 0);
		return (C - A) * (D - B) + (G - E) * (H - F) - overlap_width * overlap_height;
	}
};