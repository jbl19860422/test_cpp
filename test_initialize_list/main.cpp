#include <iostream>
#include <vector>
class Base {
public:
	Base(std::initializer_list<int> l) 
	{
		for(const auto & i : l)
		{
			v_.push_back(i);
		}
	}
	std::vector<int> v_;
};

int main(char argc, char *argv[])
{
	Base b{1,2,3,4};
}
