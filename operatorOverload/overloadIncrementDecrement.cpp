// Overload increment/decrement operator

#include <iostream>

class Base
{
public:
	int num;

	Base( const int& val ) : num{ val } 
	{
	}

	void print() const
	{
		std::cout << "num = " << num << std::endl;
	}

	Base& operator++();			// Pre-increment
	Base operator++( int );		// Post-increment
	Base& operator--();			// Pre-decrement
	Base operator--( int );		// Post-decrement
};

Base& Base::operator++()	
{
	++num;
	return *this;
}

Base Base::operator++( int )
{
	Base obj{ num };
	++num;
	return obj;
}

Base& Base::operator--()
{
	--num;
	return *this;
}

Base Base::operator--( int )
{
	Base obj{ num };
	--num;
	return obj;
}

std::ostream& operator<<( std::ostream& os, const Base& b )
{
	os << b.num;
	return os;
}

std::istream& operator>>( std::istream& is, Base& b )
{
	is >> b.num;
	return is;
}

int main()
{
	int val = 23;
	std::cout << "val = " << val << std::endl;
	std::cout << val++ << std::endl;
	std::cout << ++val << std::endl;
	std::cout << val-- << std::endl;
	std::cout << --val << std::endl;
	std::cout << "-------\n";

	Base b1{ 23 };

	b1.print();
	std::cout << b1++ << std::endl;
	std::cout << ++b1 << std::endl;
	std::cout << b1-- << std::endl;
	std::cout << --b1 << std::endl;
	b1.print();
}

// Output

// num = -23