// Overload input/output operator
// Overloading happens in left operator which is cin/cout
// So they need to be overloaded as outside functions

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
};

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
	Base b1{ 23 };

	std::cout << b1 << std::endl;
	std::cout << "Enter a number : ";
	std::cin >> b1;
	std::cout << b1 << std::endl;
}

// Output

// 23
// Enter a number : 52
// 52