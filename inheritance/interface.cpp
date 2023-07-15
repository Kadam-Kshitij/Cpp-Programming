// Interface class has all its member functions as pure virtual functions

#include <iostream>

class Base
{
public:
	virtual void foo() = 0;
	virtual void goo() = 0;
};

class Derived1 : public Base
{
public:
	void foo() override
	{
		std::cout << "Foo\n";
	}

	void goo() override
	{
		std::cout << "Goo\n";
	}
};

int main()
{
	// Base b;
	Derived1 d;
	d.foo();
	d.goo();
}

// Output

// Foo
// Goo