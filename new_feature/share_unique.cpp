#include "share_unique.h"
#include <iostream>
#include<memory>
using namespace std;

class MyClass
{
public:
	char * a = NULL;
	MyClass();
	~MyClass();

private:

};

MyClass::MyClass()
{
	a = new char;
}

MyClass::~MyClass()
{
	printf("free char");
	delete a;
}

int main()
{
	shared_ptr<MyClass> p1(new MyClass);   //#4
	shared_ptr<MyClass> p2;                      //#5

	p2 = p1;
	cout << "p2 reset" << endl;
	p2.reset();
	cout << "p1 reset" << endl;
	p1.reset();

	/*
	unique_ptr<string> p3(new string("auto"));   //#4
	unique_ptr<string> p4;                      //#5
	// p4 = p3;//此时会报错！！
	*/
	cout << "Hello CMake。" << endl;
	int a;
	cin >> a;
	return 0;
}
