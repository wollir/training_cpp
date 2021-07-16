#pragma once
#include <iostream>
#include <vector>
using vec_int = std::vector<int>;

class Array
{
public:
	/* NC41 最长无重复子数组 */
	int maxLength(std::vector<int>& arr);
	int maxLength_v2(std::vector<int>& arr);
	void merge_two_arr(int A[], int m, int B[], int n);
private:

};
