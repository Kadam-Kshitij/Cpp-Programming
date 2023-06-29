-- Function pointer --
int ( *foo )( int, float ) = &goo;
int ( *foo )( int, float ) = goo;

To call the function we can use two ways - 
foo( 23, 45 );        // Implicit dereference
( *foo )( 23, 45 );   // Explicit dereference
*foo( 23, 45 );       // Wrong. CTE.

-- Passing function pointer to other functions --
void goo( int ( *fptr )( int, int ) )
goo( foo );
Providing default values --> void foo( int( *fptr )( int, float ) = hoo )

Another way is by using the std::function -
#include <functional>
std::function< float( int, float ) > fptr = hoo;
fptr( 23, 6 );

-- Function pointers to class member functions --
Pointer to member function of a class
int ( Base::*fptr )( float ) = &Base::foo;
( obj.*fptr )( 23.4 );
( ptr->*fptr )( 13.4 );

-- Array of function pointers --
Array of function pointers - void( *fptr )( int, float ) = { foo, goo, hoo };
Call --> ( *fptr[i] )( 23, 57.3 );
Array of function pointers can be used for call back. ( Eg - Event loop )

-- Call Back function --
Call backs can be used to control how a particular part of the function should work.
Eg. sort ascending or descending

If function pointer is made NULL, it can lead to undefined behavior.
