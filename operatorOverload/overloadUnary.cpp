// Overload unary operator

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

	Base operator-();
};

Base Base::operator-()
{
	Base obj{ -num };
	return obj;
}

int main()
{
	Base b1{ 23 };

	Base obj = -b1;
	obj.print();
}

// Output

// num = -23