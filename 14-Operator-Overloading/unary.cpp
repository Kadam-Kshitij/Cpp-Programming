#include <iostream>

class Base
{
	int val{};
public:
	Base( const int& x ) : val{ x } 
	{
	}

	int getVal() const
	{
		return val;
	}

	void operator-()
	{
		val = -val;
	}
};

int main()
{
	Base b{ 71 };
	std::cout << "val = " << b.getVal() << std::endl;

	-b;
	std::cout << "val = " << b.getVal() << std::endl;
}