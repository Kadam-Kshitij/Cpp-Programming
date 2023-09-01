#include <iostream>

class Base
{
public:
	void print() const
	{
		std::cout << "Base\n";
	}

	void foo() const
	{
		std::cout << "Foo\n";
	}
};

class Derived : public Base
{
public:
	void print() const
	{
		std::cout << "Derived\n";
		Base::print();	// Calling base class function
	}
};

int main()
{
	Derived obj{};
	obj.foo();		// Since function does not exist in derived class, base one is called
	obj.print();	// Derived class foo is called.
}

// Output

// Foo
// Derived
// Base