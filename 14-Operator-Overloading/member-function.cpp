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

	Base operator+( const Base& obj )
	{
		Base b{ val + obj.getVal() };
		return b;
	}
};

int main()
{
	Base b1{ 67 };
	Base b2{ 23 };

	Base b{ b1 + b2 };
	std::cout << "Val = " << b.getVal() << std::endl;
}

// Output

// Val = 90