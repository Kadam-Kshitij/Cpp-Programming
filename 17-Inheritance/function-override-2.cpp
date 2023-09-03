#include <iostream>

class Base 
{
	int val{};
public:
	Base( const int& x ) : val{ x }
	{
	}

	friend std::ostream& operator<<( std::ostream& os, const Base& obj );
};

std::ostream& operator<<( std::ostream& os, const Base& obj )
{
	os << obj.val;
	return os;
}


class Derived : public Base 
{
public:
	Derived( const int& x ) : Base{ x }
	{
	}

	friend std::ostream& operator<<( std::ostream& os, const Derived& obj );
};

std::ostream& operator<<( std::ostream& os, const Derived& obj )
{
	os << "Derived - ";
	os << static_cast< Base >( obj );
	return os;
}


int main()
{
	Base obj{ 81 };
	std::cout << "Base - " << obj << std::endl;

	Derived d{ 73 };
	std::cout << "Derived - " << d << std::endl;
}

// Output

// Base - 81
// Derived - Derived - 73