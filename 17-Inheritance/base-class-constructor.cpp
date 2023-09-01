#include <iostream>

class Base
{
	int num{};
public:
	Base( const int& x ): num{ x }
	{
	}

	int printBase() const
	{
		return num;
	}
};

class Derived: public Base
{
	int val{};
public:
	// Calling base class constructor from initializer list
	Derived( const int& x, const int& y ) : Base{ x }, val{ y }
	{
	}

	void print() const
	{
		std::cout << "x, y = " << printBase() << ", " << val << std::endl;
	}
};


int main()
{
	Derived obj( 23, 92 );
	obj.print();
}


// Output

// x, y = 23, 92