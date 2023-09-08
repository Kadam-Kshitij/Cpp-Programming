#include <iostream>

class Base
{
public:
	int val{};
	Base( const int& x ) : val{ x }
	{
	}

	Base& operator++()	// Pre-increment
	{
		++val;
		return *this;
	}

	Base& operator--()  // Pre-decrement
	{
		--val;
		return *this;
	}

	Base operator++( int )	// Post-Increment
	{
		Base rv{ *this };
		++val;
		return rv;
	}

	Base operator--( int )	// Post-Decrement
	{
		Base rv{ *this };
		--val;
		return rv;
	}
};

std::ostream& operator<<( std::ostream& os, const Base& obj )
{
	os << obj.val;
	return os;
}

int main()
{
	Base obj{ 34 };
	std::cout << "val =  " << obj << std::endl;
	std::cout << "val =  " << ++obj << std::endl;
	std::cout << "val =  " << --obj << std::endl;
	std::cout << "val =  " << obj++ << std::endl;
	std::cout << "val =  " << obj-- << std::endl;
	std::cout << "val =  " << obj << std::endl << std::endl;
	++obj = 23;
	obj++ = 25;

	int val = 34;
	std::cout << "val =  " << val << std::endl;
	std::cout << "val =  " << ++val << std::endl;
	std::cout << "val =  " << --val << std::endl;
	std::cout << "val =  " << val++ << std::endl;
	std::cout << "val =  " << val-- << std::endl;
	std::cout << "val =  " << val << std::endl;
}