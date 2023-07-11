#include <iostream>

enum class Fruits
{
	Apple = 4,
	Mango,
	Orange = -3,
	Grapes
};

enum class Colors
{
	White = 3,
	Black,
	Orange, // No CTE
	Green = 3
};

int main()
{
	if ( 4 == static_cast< int >( Fruits::Apple ) )
	{
		std::cout << "Can not be compared with integer directly\n";
	}

	if ( static_cast< int >( Colors::Black ) == static_cast< int >( Fruits::Apple ) )
	{
		std::cout << "Can not be compared directly with other enums\n";
	}

	// // Fruits fruit = 50; // CTE
	Fruits fruit = Fruits::Mango;	// Need scope resoluation operator
	std::cout << "fruit = " << static_cast< int >( fruit ) << std::endl;
}

// Output

// Can not be compared with integer directly
// Can not be compared directly with other enums
// fruit = 5
