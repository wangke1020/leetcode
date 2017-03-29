#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int removeDuplicates(int* nums, int numsSize) {
	if (numsSize == 0 || numsSize == 1)
		return numsSize;

	int writeLocation = 0;
	for (int i = 1; i < numsSize; i++) {
		if (nums[i] == nums[writeLocation])
			continue;
		writeLocation++;
		nums[writeLocation] = nums[i];
	}

	return writeLocation + 1;
}

int main()
{
	getchar();
	return 0;
}