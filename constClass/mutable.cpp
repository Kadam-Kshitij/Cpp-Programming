// Defining a member variable as mutable makes it possible to modify
// it in const member functions 

#include <iostream>

class Base
{
	mutable int val;

public:
	Base( const int& x ) : val{ x }
	{
	}

	void foo() const
	{
		val = 12;	// Without mutable we would get CTE
		std::cout << "Foo_2\n";
	}

	void print() const
	{
		std::cout << "val = " << val << "\n";
	}
};

int main()
{
	const Base b2( 87 );
	b2.print();
	b2.foo();
	b2.print();
}

// Output
//
// val = 87
// Foo_2
// val = 12

