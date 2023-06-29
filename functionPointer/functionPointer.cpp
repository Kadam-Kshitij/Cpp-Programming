#include <iostream>
#include <functional>	// For std::function<>

void foo( int x, float y )
{
	std::cout << "Foo " << x << " " << y << std::endl;
}

void foo_1( int x, float y )
{
	std::cout << "Foo " << x << " " << y << std::endl;
}

void foo_2( int x, float y )
{
	std::cout << "Foo " << x << " " << y << std::endl;
}

// Function pointer as a function parameter with default value
void goo( void( *fptr )( int, float ) = &foo )
{
	fptr( 5, 6.0 );
}

class Base
{
public:
	void hoo( int val )
	{
		std::cout << "Hoo " << val << std::endl;
	}
};

int main()
{
	void ( *fptr_1 )( int, float ) = &foo;	// Way 1
	void ( *fptr_2 )( int, float ) = foo;	// Way 2

	fptr_1( 1, 2.0 );						// Implicit dereference
	( *fptr_2 )( 3, 4 );					// Explicit dereference
	// *fptr_2( 3, 4 );	// CTE

	goo( foo );
	goo();

	std::function< void( int, float ) > fptr_3 = foo;	// Using std library function
	fptr_3( 7, 8 );

	// Function pointers to class member functions
	void ( Base::*fptr_4 )( int ) = &Base::hoo;
	Base b;
	( b.*fptr_4 )( 9 );
	Base* ptr = new Base();
	( ptr->*fptr_4 )( 10 );

	// Array of function pointers
	void( *fptr_arr[] )( int, float ) = { foo, foo_1, foo_2 };
	fptr_arr[0]( 11, 12 );
	fptr_arr[1]( 13, 14 );
	fptr_arr[2]( 15, 16 );
}