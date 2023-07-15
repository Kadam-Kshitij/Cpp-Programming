// Abstract class has atleast one member function as pure virtual function.
// Cannot create an instance of such objects.
// If derived class does not implement the function then,
// that class will also remain abstract

#include <iostream>

class Base
{
public:
	virtual void foo() = 0;
	void goo()
	{
		std::cout << "Goo\n";
	}
};

class Derived1 : public Base
{
};

class Derived2 : public Derived1
{
public:
	void foo() override
	{
		std::cout << "Foo\n";
	}
};

int main()
{
	// Base b;
	// Derived1 d;
	Derived2 d;
	d.foo();
	d.goo();
}

// Output

// Foo
// Goo