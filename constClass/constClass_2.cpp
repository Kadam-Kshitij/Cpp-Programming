// const objects can call only const member functions
// non-const objects can call any member functions

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
		std::cout << "Foo\n";
	}

	void goo() const
	{
		std::cout << "Goo\n";
	}
};

int main()
{
	Base b1( 90 );
	b1.foo();
	b1.goo();

	const Base b2( 87 );
	// b2.foo();	// CTE
	b2.goo();
}

// Output
//
// Foo
// Goo
// Goo
