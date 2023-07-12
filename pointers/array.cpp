#include <iostream>

int main()
{
	char buff[4] = "abc";
	std::cout << buff << std::endl;				// Prints abc
	std::cout << ( void* )buff << std::endl;	// Prints address of first element

	int buff_i[4] = {0 ,5, 2, 8};
	std::cout << buff_i << std::endl;			// Prints address of first element

	std::cout << "a[i] = " << buff_i[2] << std::endl;
	std::cout << "i[a] = " << 2[buff_i] << std::endl;
	std::cout << "*( a + i ) = " << *( buff_i + 2 ) << std::endl;
}

// Output

// abc
// 0x7ffe7bf54924
// 0x7ffe7bf54910
// a[i] = 2
// i[a] = 2
// *( a + i ) = 2