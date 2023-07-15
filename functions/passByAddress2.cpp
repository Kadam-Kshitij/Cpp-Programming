// Pass pointer by reference

#include <iostream>

void foo( int* ptr_f )
{
	std::cout << "*ptr_f = " << *ptr_f << std::endl;
	ptr_f = new int( 100 );
	std::cout << "*ptr_f = " << *ptr_f << std::endl;
}

void goo( int*& ptr_g )
{
	std::cout << "*ptr_g = " << *ptr_g << std::endl;
	ptr_g = new int( 110 );
	std::cout << "*ptr_g = " << *ptr_g << std::endl;
}

int main()
{
	int num = 90;
	int* ptr = &num;
	std::cout << "*ptr, num = " << *ptr << ", " << num << std::endl;
	foo( ptr );
	std::cout << "*ptr, num = " << *ptr << ", " << num << std::endl;
	goo( ptr );
	std::cout << "*ptr, num = " << *ptr << ", " << num << std::endl;
}

// Output

// num = 90
// *ptr = 90
// *ptr = 100
// num = 100