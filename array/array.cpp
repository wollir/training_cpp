// training_cpp.cpp: 定义应用程序的入口点。
//

#include "array.h"
#include <iostream>
#include <vector>
#include<algorithm>
#include<map>
#include<unordered_set>

using namespace std;

static int maxLengthCore(vec_int arr, int begin, int end) {
	if (begin > end)
		return 0;
	else if (begin == end)
		return 1;
	for (size_t i = begin; i <= end; i++)
	{
		for (size_t j = i + 1; j <= end; j++) {
			if (arr[i] == arr[j]) {
				return max(maxLengthCore(arr, begin, j - 1), maxLengthCore(arr, j, end));
			}
		}
	}
	return end - begin + 1;
}
int Array::maxLength(vector<int>& arr)
{	
	return maxLengthCore(arr, 0, arr.size() - 1);
}
int Array::maxLength_v2(vector<int>& arr)
{
	if (arr.size() < 2)
		return arr.size();
	int left = 0;
	int right = 0;
	int max_lenth = 1;
	std::unordered_set<int> pos_save;
	pos_save.insert(arr[right]);
	while (right != arr.size() - 1)
	{
		right++;
		if (pos_save.find(arr[right]) == pos_save.end()) {
			pos_save.insert(arr[right]);
		}
		else {
			max_lenth = max(max_lenth, right - left);
			left = right;
			pos_save.clear();
			pos_save.insert(arr[right]);
		}
	}
	return max(max_lenth, right - left + 1);
}

void Array::merge_two_arr(int A[], int m, int B[], int n)
{
	if (n < 1) {
		return;
	}
	uint32_t headC = 0;
	uint32_t headB = 0;
	int A_i = 0;
	int *c = (int*)malloc(m * sizeof(int));
	for (size_t i = 0; i < m; i++)
	{
		c[i] = A[i];
	}
	while (A_i < m+n)
	{
		if ( m==0 || headC == m  || headB != n && c[headC] >= B[headB] && headB != n) {
			A[A_i++] = B[headB++];
		}
		else
		{
			A[A_i++] = c[headC++];
		}
	}
	free(c);
}


