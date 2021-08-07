#pragma once
#include <iostream>
#include <vector>
#include <stack>
using vec_int = std::vector<int>;
using namespace std;
class Array
{
public:
	void print_arr(int* A, int len);
	/* NC41 最长无重复子数组 */
	int maxLength(std::vector<int>& arr);
	int maxLength_v2(std::vector<int>& arr);
	void merge_two_arr(int A[], int m, int B[], int n);
	void merge_sort(int A[], int len);
	void next_bigger_than_me(vec_int arr);
	int findKth(vector<int> a, int n, int K);
	void queck_sort(vector<int>& a, int L, int R, int k);
private:

};
