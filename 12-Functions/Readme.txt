----- 12.1 — Function Pointers -----
int ( *foo )( int, float ) = &goo;
int ( *foo )( int, float ) = goo;

To call the function we can use two ways - 
foo( 23, 45 );        // Implicit dereference
( *foo )( 23, 45 );   // Explicit dereference
*foo( 23, 45 );       // Wrong. CTE.

Passing function pointer to other functions
void goo( int ( *fptr )( int, int ) )
goo( foo );
Providing default values --> void foo( int( *fptr )( int, float ) = hoo )

Another way is by using the std::function -
#include <functional>
std::function< float( int, float ) > fptr = hoo;
fptr( 23, 6 );

Function pointers to class member functions
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


----- 12.2 — The stack and the heap -----
Stack is small in size ( 1-8 MB ).
Stack contains function call stack.
Each stack frame contains function call with function args and local variables.
If lot of function calls happen or in case of large data structures (huge local array),
the stack might get filled up causing segmentation fault.

Heap is large in size.
Variables allocated dynamically using new, malloc, calloc are assigned on the heap.
Stack memory is allocated/deallocated automatically by compiler.
Heap memory allocated must be freed by the user. Else it is freed when program terminates.
Heap is slower and costly.
Stack is contigious. Heap is randomly allocated.

We can increase/decrease stack size using 
ulimit -s <size>
ulimit -s unlimited		// Unlimited stack
ulimit -a 				// Display all resources


----- 12.3 — std::vector capacity and stack behavior -----
For vectors, length is the number of elements in the vector.
Capacity is, how many elements are allocated in the memory.


----- 12.7 — Introduction to lambdas -----
Lambdas are anonymous functions inside another function.
Syntax -
[capture clause]( parameters )->returnType{ statements; };