#include <iostream>

class Base
{
public:
	// Pure virtual function
	virtual void foo() const = 0;
};

void Base::foo() const
{
	std::cout << "Foo Base\n";
}

class Derived : public Base
{
public:
	void foo() const override
	{
		std::cout << "foo\n";
		Base::foo();
	}
};

int main()
{
	Derived obj;
	obj.foo();
}

// Output

// foo
// Foo Base