#include <iostream>

class Base
{
public:
	void foo() const
	{
		std::cout << "Foo Base\n";
	}
};

class Derived : public Base
{
public:
	void foo() const
	{
		std::cout << "Foo Derived\n";
	}
};

int main()
{
	Derived obj;
	
	Base* ptr = &obj;
	Base& ref = obj;

	obj.foo();	// Calls Derived class object
	ptr->foo();	// Calls Base class object
	ref.foo();	// Calls Base class object
}

// Output

// Foo Derived
// Foo Base
// Foo Base