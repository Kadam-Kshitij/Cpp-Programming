#include <iostream>

class Base
{
	static int var_s;
	int var;
public:
	static void foo();
	void goo();
};

int Base::var_s = 90;

void Base::foo()	// no keyword static here
{
	std::cout << "foo - static\n";
	std::cout << "var_s = " << var_s << std::endl;

	// CTE - static member functions can access only static member variables of class
	// std::cout << "var = " << var << std::endl;

	// CTE - ‘this’ is unavailable for static member functions
	// std::cout << this << std::endl; 
}

void Base::goo()
{
	// Non-static member functions can access all member variables
	std::cout << "goo - " << var_s << ", " << var << std::endl;
	std::cout << "this " << this << std::endl;
}

int main()
{
	Base::foo();

	Base obj;
	obj.goo();
}