#include <iostream>

class Base
{
public:
	int x{};
	Base( const int& num ) : x{ num }
	{
	}
};

class Derived : public Base
{
public:
	int val{};
	Derived( const int& x, const int& y ) : Base{ x }, val{ y }
	{
	}
};

int main()
{
	Derived d1{ 12, 45 };
	Derived d2{ 46, 67 };
	Base& ref{ d1 };

	std::cout << "d1 = " << d1.x << "," << d1.val << std::endl;
	std::cout << "d2 = " << d2.x << "," << d2.val << std::endl;
	ref = d2;

	std::cout << "d1 = " << d1.x << "," << d1.val << std::endl;
}

// Output

// d1 = 12,45
// d2 = 46,67
// d1 = 46,45