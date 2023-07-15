// Here only function display is friend of Base class.
// So display has access to Base class private member functions

#include <iostream>

class Base;

class Second
{
	Base* b;
public:
	Second( Base* ptr ) : b{ ptr }
	{
	}

	void display();
	void display2();
};

class Base
{
	float val = 89;

	void print()
	{
		std::cout << "val = " << val << std::endl;
	}

	friend void Second::display();
};

void Second::display()
{
	std::cout << "val = " << b->val << std::endl;
	b->print();
}

void Second::display2()
{
	// CTE
	// std::cout << "val = " << b.val << std::endl;
	// b.print();
}

int main()
{
	Base* b = new Base;

	Second obj{ b };
	obj.display();
	obj.display2();
}

// Output

// val = 89
// val = 89