#include <iostream>

void pass( int arr[] )
{
	std::cout << "sizeof( arr ) - " << sizeof( arr ) << std::endl;
	std::cout << "sizeof( arr[0] ) - " << sizeof( arr[0] ) << std::endl;
	// std::cout << "std::size( arr ) - " << std::size( arr ) << std::endl; // CTE
	// std::size cannot be used on array which has been passed from other function.
}

int main()
{
	int arr[6]{ 1, 2, 3, 4, 5, 6 };
	std::cout << "sizeof( arr ) - " << sizeof( arr ) << std::endl;
	std::cout << "sizeof( arr[0] ) - " << sizeof( arr[0] ) << std::endl;
	std::cout << "std::size( arr ) - " << std::size( arr ) << std::endl;

	pass( arr );
}

// Output

// sizeof( arr ) - 24
// sizeof( arr[0] ) - 4
// sizeof( arr ) - 8
// sizeof( arr[0] ) - 4


// In the function where array is declared, sizeof returns the entire array size.
// In a function where array is passed, sizeof returns the size of pointer.