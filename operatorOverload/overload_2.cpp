// Using friend function

#include <iostream>

class Base
{
	int num;

public:
	Base( const int& val ) : num{ val } 
	{
	}

	void print()
	{
		std::cout << "num = " << num << std::endl;
	}

	friend Base operator+( const Base& b1, const Base& b2 );
};

Base operator+( const Base& b1, const Base& b2 )
{
	Base obj{0};
	obj.num = b1.num + b2.num;	// Direct access to private member functions
	return obj;
}

int main()
{
	Base b1{ 23 };
	Base b2{ 45 };

	Base b3 = b1 + b2;

	b3.print();
}

// Output

// num = 68