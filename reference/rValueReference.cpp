// Reference to r-value
// r-value reference increases the lifespan of temporary objects

#include <iostream>

void foo( int&& val )
{
	std::cout << "Val = " << val << std::endl;
}

int main()
{
	// If we use int& then it will cause CTE - cannot bind non-const lvalue
	// reference of type ‘int&’ to an rvalue of type ‘int’
	foo( 7 );

	int&& rref = 90;
	std::cout << "rref = " << rref << std::endl;
	rref = 100;
	std::cout << "rref = " << rref << std::endl;

	// int& cref = 99;		// CTE
	const int& cref = 99;	// No CTE 
}

// Output

// Val = 7
// rref = 90
// rref = 100