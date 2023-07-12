// When the object a reference is pointing to is destroyed before the reference,
// it is called as dangling reference. Leads to undefined behavior.

#include <iostream>

int main()
{
	int* ptr = new int( 78 );
	int& ref = *ptr;

	std::cout << "ref = " << ref << std::endl;	// 78
	delete ptr;
	std::cout << "ref = " << ref << std::endl;	// 0
}

// Output

// ref = 78
// ref = 0