-- Functions --
Argument vs Parameters
Argument - foo( a, b ); 
Parameter - void foo( int a, int b )
 
-- Passing arguments --
1) Pass by value - void foo( int a, int b ) -- foo( a, b );
2) Pass by reference - void foo( int& a, int& b ) -- foo( a, b );
3) Pass by address - void foo( int* a, int* b ) -- foo( &a, &b );

Here pass by value is used if we dont want to modify the passed arguments value.

Pass by reference is used if we want to modify the passed arguments value.
For large data types ( structs, class etc ) pass by reference should be used to
prevent performance isuue due to copy.

In case of pass by address, void foo( int* a ), foo( ptr ) the address is passed by value.
and if we change a = &<new_var> then it will not change the address to which ptr is pointing.
If we use void foo( int*& a ), foo( ptr ), the the pointer is passed by reference
and will cause change in ptr.

-- Inline functions --
inline void foo( int a, int b )
When a function call is made there is a overhead due to saving current address,
jumping to new address, function parameters and so on.
For small functions this overhead could be comparable to execution time of the function.
For large functions this overhead is negligible.
The compiler will replace the code where call to inline function is made
with the body of the function. This reduces execution time.
Should not be used in case lot of calls are made to the inline function.
This increases the size of output binary.
Modern computers are smart and do inlining by themselves. Inlining happens at compile time.

-- Stack vs Heap --
Stack is small in size ( 1-8 MB ). Contains variables and function call stack.
If lot of function calls happen or in case of large data structures,
the stack might get filled up causing segmentation fault. 

Heap is large in size. Variables allocated dynamically using new, malloc, calloc are assigned on the heap.
Stack memory is allocated/deallocated automatically by compiler. Heap is done by used manually.
Heap is slower and costly.
Stack is contigious. Heap is randomly allocated.

We can increase/decrease stack size using 
ulimit -s <size>
ulimit -s unlimited		// Unlimited stack
ulimit -a 				// Display all resources

-- Command line args --
int main( int argc, char** argv )
int main( int argc, char* argv[] )

argc - Contains number of arguments. Inculing the binary name.
( ./b p1 p2 "p3 p4" Here argc will be 4 since "p3 p4" is considered as one arg )
argv - Array of c-stype strings. To access a particular value use argv[i] where 0 <= i < argc.
argv[0] is the file name of the binary ( eg - ./b ).