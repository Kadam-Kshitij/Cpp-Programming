#include <iostream>

class Base
{
public:
	virtual Base* foo()
	{
		std::cout << "Foo Base\n";
		return this;
	}

	void goo() const
	{
		std::cout << "Goo Base\n";
	}
};

class Derived : public Base
{
public:
	Derived* foo() override
	{
		std::cout << "Foo Derived\n";
		return this;
	}

	void goo() const
	{
		std::cout << "Goo Derived\n";
	}
};

int main()
{
	Derived obj;
	Base* ptr{ &obj };

	obj.foo()->goo();	// Returns Derived*
	ptr->foo()->goo();	// Returns Derived* which is upcast to Base*
}

// Output

// Foo Derived
// Goo Derived
// Foo Derived
// Goo Base