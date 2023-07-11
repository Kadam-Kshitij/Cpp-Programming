// Used to remove constantness of a pointer, reference, pointer to data-member 
// when passing to a 3rd party function which does not use const.

#include <iostream>

class Base
{
public:
	void foo( int* ptr )
	{
		std::cout << "Ptr = " << *ptr << std::endl;
	}

	void goo( int& ref )
	{
		std::cout << "Ref = " << ref << std::endl;
	}
};

int main()
{
	Base b;

	int num = 45;
	const int* ptr = &num;
	const int& ref = num;

	b.foo( const_cast< int* >( ptr ) );
	b.goo( const_cast< int& >( ref ) );
}

// Output

// Ptr = 45
// Ref = 45