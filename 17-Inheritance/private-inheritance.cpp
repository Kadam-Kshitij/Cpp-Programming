#include <iostream>

class Base
{
public:
	int x{ 56 };
};

class Derived : private Base
{
public:
	void foo() const
	{
		std::cout << "x = " << x << std::endl;
	}
};

int main()
{
	Derived d;
	d.foo();

	// std::cout << "x = " << d.x << std::endl; // CTE - x is private in Derived

	// Base is inaccessible base of derived
	// std::cout << "x = " << static_cast< Base >( d ).x << std::endl;
}