#include <memory>

void printArr(int* num, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", *(num + i));
	}
	printf("\n");
}
void merge(int A[], int m, int B[], int n){
	int i = m - 1;
	int j = n - 1;
	for (int k = m + n - 1; k >= 0; k--){
		if (i < 0){  //i < 0 j >= 0
			A[k] = B[j--];
		}
		else if (j < 0){ //j < 0 i >= 0
			A[k] = A[i--];
		}
		else{  // i >= 0 j >= 0
			if (A[i] >= B[j])
			{
				A[k] = A[i--];
			}
			else{
				A[k] = B[j--];
			}
		}
		printArr(A, 5);
	}
}

void main()
{
	int nums1[5] = { 1, 5, 3, 0, 0 };
	//printArr(nums1, 5);
	int nums2[2] = { 2,7 };
	merge(nums1, 3, nums2, 2);
	//printArr(nums1, 2);
	getchar();
	return;

}

