#include <iostream>

class Base1 {
public:
	Base1(int m) {
		data_ = m;
	}
private:
	int data_;
};

class Derived1:public Base1 {
public:
	using Base1::Base1;//如果没有这句，那么编译报错
};

int main(char argc, char *argv[])
{
	Derived1 d(1);
}
