#include <iostream>

class Base
{
public:
	virtual void foo() const
	{
		std::cout << "foo Base\n";
	}

	virtual void goo() const
	{
		std::cout << "goo Base\n";
	}

	virtual void hoo() const
	{
		std::cout << "hoo Base\n";	
	}
};

class Derived : public Base
{
public:
	void foo() const override
	{
		std::cout << "foo Derived\n";
	}

	void goo() const override
	{
		std::cout << "goo Derived\n";
	}
};

class Derived2 : public Derived
{
public:
	void foo() const override
	{
		std::cout << "foo Derived2\n";
	}
};

int main()
{
	Derived2 obj{};
	Base* ptr = &obj;
	ptr->foo();
	ptr->goo();
	ptr->hoo();
	ptr->Base::foo();	// To call Base function use scope resolution operator
	std::cout << std::endl;

	Base& ref = obj;
	ref.foo();
	ref.goo();
	ref.hoo();
	std::cout << std::endl;

	Base* ptr2 = new Base();
	ptr2->foo();		// Will call foo of Base
}

// Output

// foo Derived2
// goo Derived
// hoo Base
// foo Base
//
// foo Derived2
// goo Derived
// hoo Base
//
// foo Base