#include "list.h"
#include<iostream>
using namespace std;

int main()
{
	List my_list;
	vector<int> arr = { 1,2,3,4 };
	auto root = my_list.create_list(arr);
	auto res = my_list.list_revert_digui(root);
	my_list.print_list(res);
	cout << "Hello CMake¡£" << endl;
	return 0;
}
