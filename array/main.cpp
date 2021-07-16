#include "array.h"
#include <iostream>
#include <vector>
using namespace std;
int main()
{

	Array* array_train = new Array();
	vec_int params = { 2,3,2,2,4,5,2 };
	// auto res = array_train->maxLength_v2(params);
	int res = 0;
	int a[2] = {1};
	int b[1] = {2};
	array_train->merge_two_arr(a,1,b,1);

	int pause;
	cout << "Hello CMake¡£" << res<< endl;
	cin >> pause;
	return 0;
}