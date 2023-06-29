// In case of overloaded function -
// const object calls const overloaded member function
// non-const object calls non-const overloaded member function

#include <iostream>

class Base
{
	int val;

public:
	Base( const int& x ) : val{ x }
	{
	}

	void foo()
	{
		std::cout << "Foo_1\n";
	}

	void foo() const
	{
		std::cout << "Foo_2\n";
	}
};

int main()
{
	Base b1( 90 );
	b1.foo();

	const Base b2( 87 );
	b2.foo();
}

// Output
//
// Foo_1
// Foo_2
