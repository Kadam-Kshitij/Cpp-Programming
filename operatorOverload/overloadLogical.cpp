// Overload logical operator

#include <iostream>
#include <bitset>

class Base
{
public:
	std::bitset< 8 > bits;

	Base( const std::bitset< 8 > val ) : bits{ val } 
	{
	}

	void print() const
	{
		std::cout << "bits = " << bits << std::endl;
	}

	Base operator&&( const Base& obj );
};

Base Base::operator&&( const Base& b )
{
	std::bitset< 8 > x;
	for( int i = 0; i < 8; ++i )
	{
		x[i] = bits[i] && b.bits[i];
	}

	Base obj{ x };
	return obj;
}

int main()
{
	Base b1{ 0b10010101 };
	Base b2{ 0b10111100 };

	Base obj = b1 && b2;
	obj.print();
}

// Output

// bits = 10010100