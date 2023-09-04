#include <iostream>

// Abstract class
class Base
{
public:
	virtual void foo() const = 0;
	void goo()
	{
		std::cout << "Goo\n";
	}
};

class Derived : public Base
{
public:
	void foo() const override
	{
		std::cout << "foo\n";
	}
};

int main()
{
	// Base b; // CTE - Cannot create object of abstract class
}