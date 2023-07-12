// Pointer which points to a deallocated memory is called as dangling pointer.

#include <iostream>

int main()
{
	int* ptr = new int( 90 );
	std::cout << "Val = " << *ptr << std::endl;
	delete ptr;
	std::cout << "Val = " << *ptr << std::endl;		// Pointer is deleted
}

// Output

// 90
// 0