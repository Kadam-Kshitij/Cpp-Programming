#include <iostream>

std::string operator+( const int& num, const std::string& str )
{
	return std::to_string( num ) + " " + str;
}

int main()
{
	int num = 23;
	std::string str = "string";

	std::cout << num + str << std::endl;
}

// Output

// 23 string