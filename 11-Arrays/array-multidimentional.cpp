#include <iostream>

int main()
{
	int arr[3][4] = {{1,2},{3,4,5},{6,7,8,9}};

	for( int i = 0; i < 3; ++i )
	{
		for( int j = 0; j < 4; ++j )
		{
			std::cout << arr[i][j] << ", ";
		}
		std::cout << std::endl;
	}
}

// Output

// 1, 2, 0, 0, 
// 3, 4, 5, 0, 
// 6, 7, 8, 9,