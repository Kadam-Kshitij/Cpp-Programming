// Virtual destructor

#include <iostream>

class Base
{
public:
	// ~Base()		// In this case only Base destructor is called.
	virtual ~Base()	// In this case both Derived & Base destructor are called.
	{
		std::cout << "Base\n";
	}
};

class Derived : public Base
{
public:
	~Derived()
	{
		std::cout << "Derived\n";
	}
};

int main()
{
	Base* ptr_b = new Derived();
	delete ptr_b;
}
