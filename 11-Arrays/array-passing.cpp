#include <iostream>

// Arrays passed to function boils down to a pointer
void print( int* ptr )
{
	for( int i = 0; i < 5; ++i )
	{
		std::cout << *( ptr + i ) << ", ";
	}
	std::cout << "\n";

	// When array is passed to a function, actual array gets passed.
	// to avoid expensive copy. Next statement causes actual array to be modified.
	*( ptr + 2 ) = 100;
}

void print( int arr[], int length )
{

	for( int i = 0; i < length; ++i )
	{
		std::cout << arr[i] << ", ";
	}
	std::cout << "\n";
}

int main()
{
	int arr[]{ 11, 22, 33, 44, 55 };
	print( arr );
	print( arr, sizeof( arr )/sizeof( arr[0] ) );
}

// Output

// 11, 22, 33, 44, 55, 
// 11, 22, 100, 44, 55,