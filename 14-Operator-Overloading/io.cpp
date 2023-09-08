#include <iostream>

class Base
{
	int val{};
public:
	Base( const int& x ) : val{ x }
	{
	}

	int getVal() const
	{
		return val;
	}

	void setVal( const int& x )
	{
		val = x;
	}
};

std::ostream& operator<<( std::ostream& os, const Base& obj )
{
	os << obj.getVal();
	return os;
}

std::istream& operator>>( std::istream& is, Base& obj )
{
	int i{};
	is >> i;
	obj.setVal( i );
	return is;
}


int main()
{
	Base b1{ 90 };
	std::cout << "val = " << b1 << std::endl;
	std::cout << "Enter value : ";
	std::cin >> b1;
	std::cout << "val = " << b1 << std::endl;
}

// Output

// val = 90
// Enter value : 78
// val = 78