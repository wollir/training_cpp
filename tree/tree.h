// training_cpp.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <iostream>
template <typename T>
struct node {
	node* left;
	node* right;
	node(T i) { data = i; left = nullptr; right = nullptr; }
	T data;
};
class Tree
{
public:
	Tree() {};
	~Tree() {};
	void zhi_print(node<int>* root);
	void mid_order(node<int>* root);
	void mid_order_not_digui(node<int>* root);
private:

};
// TODO: 在此处引用程序需要的其他标头。
