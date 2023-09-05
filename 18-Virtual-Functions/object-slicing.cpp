#include <iostream>

class Base
{
public:
	virtual void foo() const
	{
		std::cout << "Base\n";
	}
};

class Derived : public Base
{
public:
	void foo() const override
	{
		std::cout << "Derived\n";
	}
};

int main()
{
	Derived d{};
	Base b = d;
	b.foo();		// Calls Base::foo since Derived part is sliced off

	Base& ref = d;
	ref.foo();

	Base* ptr = &d;
	ptr->foo();
}

// Output

// Base
// Derived
// Derived