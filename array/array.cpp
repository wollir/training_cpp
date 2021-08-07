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
void Array::print_arr(int * A, int len)
{
	for (size_t i = 0; i < len; i++)
	{
		std::cout << " " << A[i];
	}
	cout << endl;
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
void Array::next_bigger_than_me(vec_int arr)
{

	// n个整数的无序数组，找到每个元素后面比它大的第一个数，要求时间复杂度为O(N)
	if (arr.size() == 0)
		return;
	vec_int result(arr.size());
	stack<int> sta;
	int index = 0;
	sta.push(arr[index]);
	while (sta.size())
	{
		/*
		if (arr[index] > sta.top()) {
			result[i]
		}
		*/
	}

}
void merge_2_arr(int* A, int L, int Mid, int R) {
	if (L >= R)
		return;
	int a_size = R - L + 1;
	int * temp_a = new int[a_size];
	for (size_t i = 0; i < a_size; i++)
	{
		temp_a[i] = A[L + i];
	}
	int l_size = Mid - L + 1;
	int r_size = R - Mid;
	int l_i = 0;
	int r_j = 0;
	int k = 0;
	while (l_i < l_size && r_j < r_size)
	{
		A[L + k++] = temp_a[l_i] > temp_a[l_size + r_j] ? temp_a[l_size + r_j++] : temp_a[l_i++];
	}
	while (l_i < l_size)
	{
		A[L + k++] = temp_a[l_i++];
	}
	while (r_j < r_size)
	{
		A[L + k++] = temp_a[l_size + r_j++];
	}
	delete temp_a;
	temp_a = nullptr;

}
void merge_sort_(int* A, int L, int R) {
	if (L >= R)
		return;
	int mid = (L + R) / 2;
	merge_sort_(A, L, mid);
	merge_sort_(A, mid+1, R);
	merge_2_arr(A, L, mid, R);
}
void Array::merge_sort(int* A, int len)
{
	merge_sort_(A, 0, len - 1);
}
int Array::findKth(vector<int> a, int n, int K) {
	// write code here
	queck_sort(a, 0, n - 1, K);
	return a[K-1];
}
void Array::queck_sort(vector<int> &a, int L, int R, int k)
{
	if (L >= R)
		return;
	int base = a[L];
	int i = L;
	int j = R;
	while (i < j) {

		while (a[j] <= base && j > i)
			j--;
		while (a[i] >= base && j > i)
			i++;
		if (j > i) {
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	a[L] = a[i];
	a[i] = base;
	if (i - 1 <= k)
		queck_sort(a, L, i - 1, k);
	if (i + 1 <= k)
		queck_sort(a, i + 1, R, k);

}


