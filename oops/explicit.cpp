#include <iostream>

class Base
{
	float val;
public:
	/* explicit */ Base( const float& f ) : val{ f }
	{
	}

	void print()
	{
		std::cout << "val = " << val << std::endl;
	}
};

void foo( Base b )
{
	b.print();
}


int main()
{
	Base b( 23 );

	foo( b );
	foo( 67 );
	// If explicit keywork not used then we get no error.
	// If used then CTE - could not convert ‘67’ from ‘int’ to ‘Base’
}

// Output

// val = 23
// val = 67