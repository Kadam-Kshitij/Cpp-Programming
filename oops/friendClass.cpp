#include <iostream>

class Base
{
	float val = 89;

	void print()
	{
		std::cout << "val = " << val << std::endl;
	}

	friend class Second;	// Allows Second to access Base class members
};

class Second
{
	Base b;
public:
	Second( const Base& obj ) : b{ obj }
	{
	}

	void display()
	{
		std::cout << "val = " << b.val << std::endl;
		b.print();
	}
};

int main()
{
	Base b;

	Second obj{ b };
	obj.display();
}

// Output

// val = 89
// val = 89