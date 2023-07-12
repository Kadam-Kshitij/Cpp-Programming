#include <iostream>

int main()
{
	int val = 7;
	int val_1 = 17;
	int* ptr_1 = &val;
	*ptr_1 = 88;									// No CTE
	std::cout << "1 - " << val << std::endl; 		// 88
	ptr_1 = &val_1;									// No CTE
	std::cout << "2 - " << *ptr_1 << std::endl;		// 17

	int val_2 = 27;
	const int* ptr_2 = &val_2;
	// *ptr_2 = 98;									// CTE
	ptr_2 = &val_1;									// No CTE
	std::cout << "3 - " << *ptr_2 << std::endl;		// 17

	int* const ptr_3 = &val_2;
	*ptr_3 = 55;									// No CTE
	std::cout << "4 - " << val_2 << std::endl;		// 55
	// ptr_3 = &val_1;								// CTE

	int val_3 = 46;
	const int* const ptr_4 = &val_3;
	// *ptr_4 = 78;									// CTE
	// ptr_4 = &val_1;								// CTE

	const int val_4 = 89;
	// int* ptr_5 = &val_4;							// CTE
	// int* const ptr_5 = &val_4;					// CTE
	const int* ptr_5 = &val_4;						// No CTE
}

// Output

// 1 - 88
// 2 - 17
// 3 - 17
// 4 - 55