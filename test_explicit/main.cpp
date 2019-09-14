#include <iostream>

class A {
public:
	A(int k)
	{
		data_ = k;
	}
private:
	int data_;
};

class B {
public:
	explicit B(int k)
	{
		data_ = k;
	}
	int data_;
};

enum E_TEST {
	E_A = 0,
	E_B = 1
};
int main(char argc, char *argv[])
{
	A a1(10);
	std::cout << "ok" << std::endl;
	A a2 = E_A;//没问题，可以隐士转换
	B b1(10);//ok
	B b2 = E_B;//错误，无法进行隐士转换
}
