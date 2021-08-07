#include "array.h"
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	Array* array_train = new Array();

	/*
	vec_int params = { 2,3,2,2,4,5,2 };
	// auto res = array_train->maxLength_v2(params);
	int res = 0;
	int a[2] = {1};
	int b[1] = {2};
	array_train->merge_two_arr(a,1,b,1);
*/
	int A[] = { 3,4,6,7,78,3,20 };
	array_train->merge_sort(A, 7);
	array_train->print_arr(A, 7);
	vector<int> a = { 1,3,5,2,2 };
	auto res = array_train->findKth(a, 5, 3);
	cout << res << endl;

	int pause;
	cout << "Hello CMake¡£" << endl;
	cin >> pause;
	return 0;
}