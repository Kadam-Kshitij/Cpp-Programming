// Destructor call is exactly opposite to Constructor call.
// First Base constructor is called and derived constructor is called. 

#include <iostream>

class Base
{
public:
	Base()
	{
		std::cout << "Base()\n";
	}
	~Base()
	{
		std::cout << "~Base()\n";
	}
};

class Derived1 : public Base
{
public:
	Derived1()
	{
		std::cout << "Derived1()\n";
	}
	~Derived1()
	{
		std::cout << "~Derived1()\n";
	}
};

class Derived2 : public Derived1
{
public:
	Derived2()
	{
		std::cout << "Derived2()\n";
	}
	~Derived2()
	{
		std::cout << "~Derived2()\n";
	}
};

int main()
{
	Derived2 d;
}

// Output
//
// Base()
// Derived1()
// Derived2()
// ~Derived2()
// ~Derived1()
// ~Base()