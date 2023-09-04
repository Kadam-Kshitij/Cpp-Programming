#include <iostream>

class Base
{
public:
	Base()
	{
		std::cout << "Base ";
		foo();
	}
	~Base()
	{
		std::cout << "~Base ";
		foo();
	}

	virtual void foo() const
	{
		std::cout << "foo Base\n";
	}
};

class Derived : public Base
{
public:
	Derived()
	{
		std::cout << "Derived ";
		foo();
	}
	~Derived()
	{
		std::cout << "~Derived ";
		foo();
	}

	void foo() const override
	{
		std::cout << "foo Derived\n";
	}
};

class Derived2 : public Derived
{
public:
	Derived2()
	{
		std::cout << "Derived2 ";
		foo();
	}
	~Derived2()
	{
		std::cout << "~Derived2 ";
		foo();
	}

	void foo() const override
	{
		std::cout << "foo Derived2\n";
	}
};

int main()
{
	Derived2 obj{};
}

//Output

// Base foo Base
// Derived foo Derived
// Derived2 foo Derived2
// ~Derived2 foo Derived2
// ~Derived foo Derived
// ~Base foo Base