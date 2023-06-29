// To create a const object of a class it is necessary to initialize
// the member variables at the time of creation.
// 
// Either default value ( line 11 ) or
// Atleast empty constructor is needed to create a const object

#include <iostream>

class Base
{
	int val = 9;

public:
	Base( const int& x )
	{
		val = x;
	}

	void print() const
	{
		std::cout << "Val = " << val << std::endl;
	}
};

int main()
{
	const Base b;
	b.print();
}

// Output
//
// Val = 9