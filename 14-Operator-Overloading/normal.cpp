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
};

Base operator+(const Base& obj1, const Base& obj2)
{
	// Non-friend function does not have direct access to private members
	Base obj{ obj1.getVal() + obj2.getVal() };
	return obj;
}


int main()
{
	Base b1{ 90 };
	Base b2{ 64 };

	Base b = b1 + b2;
	std::cout << "val = " << b.getVal() << std::endl;
}

// Output

// val = 154