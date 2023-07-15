// Overload comparison operator

#include <iostream>

class Base
{
public:
	int num;

	Base( const int& val ) : num{ val } 
	{
	}

	bool operator>( const Base& b );
};

bool Base::operator>( const Base& b )
{
	return num > b.num;
}

int main()
{
	Base b1{ 23 };
	Base b2{ 45 };

	std::cout << ( b1 > b2 ) << std::endl;
	std::cout << ( b2 > b1 ) << std::endl;
}

// Output

// 0
// 1