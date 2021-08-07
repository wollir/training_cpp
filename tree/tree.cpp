// training_cpp.cpp: 定义应用程序的入口点。
//

#include "tree.h"
#include <map>
#include<queue>
#include<stack>
using namespace std;

int main()
{
	cout << "Hello CMake。" << endl;
	Tree tree;
	node<int>* root = new node<int> (1);
	root->left = new node<int>(2);
	root->right = new node<int>(3);
	root->left->right = new node<int>(4);
	root->right->left = new node<int>(5);


	tree.mid_order(root);
	int a;
	cin >> a;
	return 0;
}

void Tree::zhi_print(node<int>* root)
{
	if (root == nullptr) {
		return;
	}		
	stack<node<int>*> node_stack;
	queue<node<int>*> node_queue;
	node_queue.push(root);
	node<int>* cur = nullptr;
	while (node_queue.size() != 0)
	{
		while (node_queue.size() != 0)
		{
			cur = node_queue.front();
			node_queue.pop();
			cout << cur->data<< " ";
			if (cur->left != nullptr)
				node_stack.push(cur->left);
			if (cur->right != nullptr)
				node_stack.push(cur->right);
		}
		cout << endl;
		while (node_stack.size() != 0)
		{
			cur = node_stack.top();
			node_stack.pop();
			cout << cur->data << " ";
			if (cur->left != nullptr)
				node_queue.push(cur->left);
			if (cur->right != nullptr)
				node_queue.push(cur->right);
		}
		cout << endl;

	}
}

void Tree::mid_order(node<int>* root)
{
	if (root == nullptr) {
		return;
	}
	mid_order(root->left);
	cout << root->data;
	mid_order(root->right);
}

void Tree::mid_order_not_digui(node<int>* root)
{
	
}
