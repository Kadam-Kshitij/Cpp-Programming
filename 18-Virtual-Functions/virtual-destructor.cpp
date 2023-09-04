#include <iostream>

class Base
{
public:
	virtual ~Base()
	{
		std::cout << "~Base\n";
	}
};

class Derived : public Base
{
public:
	~Derived()
	{
		std::cout << "~Derived\n";
	}
};

int main()
{
	Base* ptr = new Derived{};

	delete ptr;
}

// Output

// ~Derived
// ~Base

// Without virtual keyword, ~Derived will not be called.