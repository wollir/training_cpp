#pragma once
#include<vector>
#include<iostream>
using namespace std;
typedef struct ListNode{
	ListNode(int _data) {
		data = _data;
		next = nullptr;
	}
	ListNode* next;
	int data;
};
class List
{
public:
	List() = default;
	~List() {};
	ListNode* create_list(vector<int> arr) {
		ListNode* root = nullptr;
		ListNode* current = nullptr;
		for (auto &x : arr) {
			if (current == nullptr) {
				root = new ListNode(x);
				current = root;
			}
			else {
				current->next = new ListNode(x);
				current = current->next;
			}
		}
		return root;
	}
	ListNode* list_revert(ListNode* root) {
		if (root == nullptr || root->next == nullptr)
			return root;
		ListNode* A = root;
		ListNode* B = root->next;
		ListNode* C = root->next->next;
		ListNode* new_root = B;  
		bool flag = false;
		while (A != nullptr && B != nullptr) 
		{
			if (flag) {
				B->next = A;
				A->next = C;
				A = C;
				if (A == nullptr)
					break;
				B = A->next;
				C = B->next;
				flag = ~flag;
			}
			else {
				B->next = A;
				A->next = C;
				A = C;
				if (A == nullptr)
					break;
				B = A->next;
				C = B->next;
				flag = ~flag;
			}
		}
		return new_root;
	}
	ListNode* list_revert_digui(ListNode* root) {
		if (root == nullptr || root->next == nullptr) {
			return root;
		}
		ListNode * temp_node = root->next;
		root->next = list_revert_digui(root->next->next);
		temp_node->next = root;
		return temp_node;
	}
	void print_list(ListNode* root) {
		while (root != nullptr) {
			std::cout << root->data << " ";
			root = root->next;
		}
		cout << endl;
	}
private:

};
