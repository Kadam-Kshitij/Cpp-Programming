#include <iostream>
#include <algorithm>

int main()
{
	int arr[10]{6,2,78,12,67,25,83,22,3};

	std::sort( std::begin( arr ), std::end( arr ) );

	for( int i : arr )
	{
		std::cout << i << ", ";
	}
	std::cout << "\n";
}