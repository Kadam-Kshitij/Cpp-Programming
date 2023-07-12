// Void pointers can point to any data type.
// But since they have no idea where they are pointing to they cannot be used for dereference.
// Arithmatic operations can also be not performed.

#include <iostream>

int main()
{
	int a = 73;
	void* ptr = &a;

	// int* ptr_i = static_cast< int* >( ptr );
	int* ptr_i = ( int* )ptr;
	std::cout << *ptr_i << std::endl;		// 73

	ptr++;	// Warning - ISO C++ forbids incrementing a pointer of type ‘void*’
	// std::cout << *ptr << std::endl;	// CTE - ‘void*’ is not a pointer-to-object type
}

// Output

// 73